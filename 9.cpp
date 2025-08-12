class Solution {
public:
    bool isPalindrome(int x) {
        int i,m;
        if(x<0) return false;
        long long sum=0;
        i=x;
        while(i>0){
            m = i % 10;
            sum = (sum*10) + m;
            i/=10;
        }
        if(x==sum){
            return true;
        }
        else
            return false;
        return false;
    }
};