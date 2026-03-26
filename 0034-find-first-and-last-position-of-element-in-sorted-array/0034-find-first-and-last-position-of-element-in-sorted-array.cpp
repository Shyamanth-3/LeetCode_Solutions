class Solution {
public:

    int bs1(vector<int>& a, int t){
        int l=0,r=a.size()-1;
        int ans=-1;
        while(l<=r){
            int m=l+(r-l)/2;
            if(a[m]==t) {
                ans=m;
                r=m-1;
            }
            else if(t>a[m]) l=m+1;
            else r=m-1;
        }
        return ans;
    }

    int bs2(vector<int>& a, int t){
        int l=0,r=a.size()-1;
        int ans=-1;
        while(l<=r){
            int m=l+(r-l)/2;
            if(a[m]==t) {
                ans=m;
                l=m+1;
            }
            else if(t>a[m]) l=m+1;
            else r=m-1;
        }
        return ans;
    }

    vector<int> searchRange(vector<int>& nums, int t) {
        int p1=-1,p2=-1;
        p1=bs1(nums,t);
        p2=bs2(nums,t);
        return {p1,p2};
    }
};