class Solution {
public:
    int minOperations(string s) {
        int ans=0;
        for(char x:s){
            int d=(26-(x-'a'))%26;
            ans=max(ans,d);
        }
        return ans;
    }
};