class Solution {
public:
    int search(vector<int>& nums, int target) {
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
        if(f>l)
            return -1;
        return m;

    }
};