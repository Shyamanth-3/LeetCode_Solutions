class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int n=nums.size(),m=0;
        int l=0,r=0,ans=0;
        while(r<n){
            if(nums[r]==0)
                m++;
            while(m>k){
                if(nums[l]==0) m--;
                l++;
            }
            ans=max(ans,r-l+1);
            r++;
        }
        return ans;
    }
};