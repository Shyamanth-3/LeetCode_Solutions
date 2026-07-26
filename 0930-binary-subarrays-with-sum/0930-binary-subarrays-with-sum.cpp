class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal){
        return solve(nums,goal)-solve(nums,goal-1);
    }

    int solve(vector<int>& nums, int goal) { 
        if(goal<0) return 0;
        int l=0,r=0,ans=0,s=0;
        while(r<nums.size()){
            s+=nums[r];
            while(s>goal && l<nums.size()){
                s-=nums[l];
                l++;
            }
                ans+=r-l+1;
                r++;
        }
        return ans;
    }
};