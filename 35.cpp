class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int f=0,l=nums.size()-1,m;
        while(f<=l){
            m=f+((l-f)/2);
            if(nums[m]==target)
                return m;
            else if(nums[m]<target)
                f=m+1;
            else 
                l=m-1;
        }
        return f;
    }

};