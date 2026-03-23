class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int r=0,l=0,ans=0;
        unordered_set<char> st;
        while(r<s.size()){
            if(st.find(s[r])==st.end()){
                st.insert(s[r]);
                ans=max(ans,r-l+1);
                r++;
            }
            else{
                st.erase(s[l]);
                l++;
            }
        }
        return ans;
    }
};