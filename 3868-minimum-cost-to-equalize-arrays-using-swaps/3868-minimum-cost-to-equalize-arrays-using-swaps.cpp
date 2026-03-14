class Solution {
public:
    int minCost(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int> mp,n1;
        for(int x:nums1) {n1[x]++;mp[x]++;}
        for(int x:nums2) {mp[x]++;}
        for(auto x:mp) if((x.second)&1) return -1;
        int ans=0;
        for(auto p:mp){
            int v=p.first;
            int t=p.second/2;
            if(n1[v]>t) ans+=n1[v]-t;
        }
        return ans;
    }
};