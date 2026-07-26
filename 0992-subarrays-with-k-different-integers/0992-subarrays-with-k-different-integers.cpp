class Solution {
public:
    int subarraysWithKDistinct(vector<int>& nums, int k) {
        return solve(nums,k)-solve(nums,k-1);
    }
    int solve(vector<int>& a, int k) {
        if(k<0) return 0;
        unordered_map<int,int> mp;
        int l=0,r=0,ans=0;
        while(r<a.size()){
            mp[a[r]]++;
            while(mp.size()>k){
                mp[a[l]]--;
                if(mp[a[l]]==0) mp.erase(a[l]);
                l++;
            }
            ans+=r-l+1;
            r++;
        }
        return ans;
    }
};