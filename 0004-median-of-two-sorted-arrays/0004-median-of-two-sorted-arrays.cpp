class Solution {
public:
    double findMedianSortedArrays(vector<int>& a, vector<int>& b) {
        int i=0,j=0,n=a.size(),m=b.size();
        int p=0,c=0;
        int ans=(n+m)/2;
        for(int k=0;k<=ans;k++){
            p=c;
            if(i<n && (j>=m || a[i]<=b[j])) {c=a[i];i++;}
            else {c=b[j];j++;}
        }
        if((n+m)%2!=0) return c;
        else return (p+c)/2.0;
    }
};