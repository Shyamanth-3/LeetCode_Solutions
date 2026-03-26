class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int l=1,r=*max_element(piles.begin(),piles.end());
        int n=piles.size(),ans=1;
        while(l<=r){
            int m=l+(r-l)/2;
            long long th=0;
            for(int i=0;i<n;i++) th+=(piles[i]+m-1)/m;
            if(th<=h) {ans=m; r=m-1;}
            else l=m+1;
        }
        return ans;
    }
};