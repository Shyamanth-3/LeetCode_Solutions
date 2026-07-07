class Solution {
public:
    long long sumAndMultiply(int n) {
        long long sum=0,num=0;
        string s="";
        while(n>0){
            if(n%10){
                sum+=n%10;
                s+=(n%10)+'0';
            }
            n/=10;
        }
        int k=s.size();
        for(int i=k-1;i>=0;i--){
            if(s[i]-'0'){
                num+=s[i]-'0';
                if(i!=0)num*=10;
            }
        }
        return num*sum;
    }
};