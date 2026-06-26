class Solution {
public:
    int trailingZeroes(int n) {
        long long s=0;
        for(long long i=5;i<=n;i*=5){
            s+=n/i;
        }
        return s;
    }
};