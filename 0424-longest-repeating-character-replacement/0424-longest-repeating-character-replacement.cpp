class Solution {
public:
    int characterReplacement(string s, int k) {
        int l=0,r=0,mf=0,ml=0;
        unordered_map<char,int> mp;
        for(;r<s.size();r++){
            mp[s[r]]++;
            mf=max(mf,mp[s[r]]);
            if((r-l+1)-mf>k) {
                mp[s[l]]--;
                l++;
            }
            else ml=max(ml,(r-l+1));
        }
        return ml;
    }
};