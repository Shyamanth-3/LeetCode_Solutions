class Solution {
public:
    int longestArithmetic(vector<int>& nums) {
        int n=nums.size();
        vector<int> l(n,1),r(n,1);
        l[1]=2;
        r[n-2]=2;
        for(int i=2;i<n;i++){
            if(nums[i]-nums[i-1]==nums[i-1]-nums[i-2]) l[i]=l[i-1]+1;
            else l[i]=2;
        }
        for(int i=n-3;i>=0;i--){
            if(nums[i+1]-nums[i]==nums[i+2]-nums[i+1]) r[i]=r[i+1]+1;
            else r[i]=2;
        }
        int ans=2;
        for(int i=0;i<n;i++){
            if(i>0) ans=max(ans,l[i-1]+1);
            if(i<n-1) ans=max(ans,r[i+1]+1);
            if(i>0 && i<n-1){
                int s=nums[i-1]+nums[i+1];
                if(s%2==0) {
                    long long v=s/2;
                    long long d=nums[i+1]-v;
                    int ls=1,rs=1;
                    if(i>=2 && nums[i-1]-nums[i-2]==d) ls=l[i-1];
                    else ls=1;
                    if(i+2<n && nums[i+2]-nums[i+1]==d) rs=r[i+1];
                    else rs=1;
                    ans=max(ans,ls+rs+1);
                }
            }
        }
        return min(ans,n);
    }
};