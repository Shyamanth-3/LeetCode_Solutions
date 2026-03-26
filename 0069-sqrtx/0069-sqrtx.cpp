class Solution {
public:
    int mySqrt(int n) {
        long long l=0,h=n;
        long long ans=-1;
        while(l<=h){
            long long m=l+(h-l)/2;
            if(m*m<=n) {
                ans=m;
                l=m+1;
            }
            else h=m-1;
        }
        return ans;
    }
};