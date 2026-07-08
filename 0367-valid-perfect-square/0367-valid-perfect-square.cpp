class Solution {
public:
    bool isPerfectSquare(int num) {
        if(num==0||num==1) return true;
        int l=1,h=num;
        while(l<=h){
            long long mid=l+(h-l)/2;
            long long s=mid*mid;
            if(s==num) return true;
            else if(s>num) h=mid-1;
            else l=mid+1;
        }
        return false;
    }
};