class Solution {
public:
    int climbStairs(int n) {
        int i,a=0,c,b=1;
        if (n <= 1)
            return n;
        for(i=0;i<=n-1;i++){
            c=a+b;
            a=b;
            b=c;
        }
        return c;
    }
};