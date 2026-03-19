class Solution {
public:
    string frequencySort(string s) {
        string ans="";
        unordered_map<char,int> mp;
        for(char x:s) mp[x]++;
        vector<vector<char>> freq(s.size()+1);
        for(auto&p : mp){
            char ch=p.first;
            int f=p.second;
            freq[f].push_back(ch);
        }
        for (int f=s.size();f>0;f--) {
            for (char ch:freq[f]) {
                ans.append(f,ch); 
            }
        }
        return ans;
    }
};