class Solution {
public:
    string minWindow(string s, string t) {
        vector<int> mp(128,0);
        for(char x: t) mp[x]++;
        int c=t.size(),l=0,r=0,d=INT_MAX,h=0;
        while(r<s.size()){
            if(mp[s[r]]-->0){
                c--;
            }
            r++;
            while(c==0){
                if(r-l<d) {
                    h=l;
                    d=r-l;
                }
                if(mp[s[l]]++==0){
                    c++;
                }
                l++;
            }
        }
        if(d==INT_MAX) return "";
        return s.substr(h,d);
    }
};