class Solution {
public:
    double myPow(double x, int n) {
        double ans;
        long long b;
        b=n;
        if(b>=0){
            ans=binpow(x,b);
            return ans;
        }
        else{
            ans=binpow(x,-1*b);
            return 1.00/ans;
        }
    }

    double binpow(double a, int b) {
        if (b==0)
            return 1;
        double res=binpow(a,b/2);
        if (b%2)
            return res*res*a;
        else
            return res*res;
    }
};