class Solution {
public:
    long long gcdSum(vector<int>& nums) {
        int n=nums.size();
        vector<int>ans;
        int fe=nums[0];
        for(int i=0;i<n;i++){
            fe=max(fe,nums[i]);
            ans.push_back(gcd(fe,nums[i]));
        }
        sort(ans.begin(),ans.end());
        long long res=0;
        int l=0,r=n-1;
        while(l<r){
            res+=gcd(ans[l],ans[r]);
            l++;
            r--;
        }
        return res;
    }
};