class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> mp(nums.begin(), nums.end());
        int ans=0;
        for(int x:mp){
            if(mp.find(x-1)==mp.end()){
                int t=x;
                int l=1;
                while(mp.find(t+1)!=mp.end()) {t++;l++;}
                ans=max(ans,l);
            }
        }
        return ans;
    }
};