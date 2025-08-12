class Solution {
public:
    int minDays(vector<int>& bloomDay, int m, int k) {
        if((long long)m*k>bloomDay.size())return -1;
        int low = *min_element(bloomDay.begin(), bloomDay.end()), high = *max_element(bloomDay.begin(), bloomDay.end());
        int mid,res=-1,bouq=0,flo=0;
        while(low<=high){
            bouq=0,flo=0;
            mid = (high+low)/2;
            for(int i=0;i<bloomDay.size();i++){
                if(bloomDay[i]<=mid){
                    flo++;
                    if(flo==k){
                        bouq++;
                        flo=0;
                    }
                }
                else
                    flo=0;
            }
            if(bouq>=m){
                res=mid;
                high=mid-1;
            }
            else
                low=mid+1;
        }
        return res;
    }
};