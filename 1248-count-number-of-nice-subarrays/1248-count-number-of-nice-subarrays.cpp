class Solution {
public:
    int numberOfSubarrays(vector<int>& nums, int k) {
        long long l=0,r=0,ans=0,n=nums.size();
        for(int i=0;i<n;i++){
            if(nums[i]&1){
                k--;
                l=0;
            }
            while(k==0){
                k+=(nums[r]%2);
                r++;
                l++;
            }
            ans+=l;
        }
        return ans;
    }
};