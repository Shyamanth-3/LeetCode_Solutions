class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int min=prices[0],max_pro=0;
        for(int i=1;i<prices.size();i++){
            if(prices[i]-min>max_pro){
                max_pro=prices[i]-min;
            }
            if(prices[i]<min)
                min=prices[i];
        }
        return max_pro;
    }
};