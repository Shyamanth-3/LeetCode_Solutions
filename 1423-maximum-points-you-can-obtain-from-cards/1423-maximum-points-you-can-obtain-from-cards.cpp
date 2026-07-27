class Solution {
public:
    int maxScore(vector<int>& cp, int k) {
        int n=cp.size(),sum=0;
        sum=accumulate(cp.begin(), cp.end(), 0);
        int sw=n-k;
        int mins=0;
        mins=accumulate(cp.begin(), cp.begin() + sw, 0);
        int ch=mins;
        for(int i=sw;i<n;i++){
            ch+=cp[i]-cp[i-sw];
            mins=min(mins,ch);
        }
        return sum-mins;
    }
};