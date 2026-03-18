class Solution {
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        int t=1<<n;
        vector<vector<int>> ans;
        set<vector<int>> mp;
        for(int i=0;i<t;i++){
            vector<int> set;
            for(int j=0;j<n;j++){
                if(i&(1<<j)){
                    set.push_back(nums[j]);
                }
            }
            mp.insert(set);
        }
        for(auto& p:mp) ans.push_back(p);
        return ans;
    }
};