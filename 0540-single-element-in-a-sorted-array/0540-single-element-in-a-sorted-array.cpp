class Solution {
public:
    int singleNonDuplicate(vector<int>& a) {
        int l=0,r=a.size()-1;
        while(l<r){
            int mid=l+(r-l)/2;
            if(mid%2) mid-=1;
            if(a[mid]==a[mid+1]) l=mid+2;
            else r=mid;
        }
        return a[r];
    }
};