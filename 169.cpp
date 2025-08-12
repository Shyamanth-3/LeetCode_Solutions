class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int i,x,c=0;
        for(i=0;i<nums.size();i++){
            if(c==0)
                x=nums[i];
            if(x==nums[i]){
                c++;
            }
            else
                c--;
        }
        return x;
    }
};