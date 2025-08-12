class Solution {
public:
    int reverse(int x) {
        string ch = to_string(x);
        long long i;
        string rch=ch;
        std::reverse(rch.begin(),rch.end());
        i=stoll(rch);
        if(x<0)i=-i;
        if(i < INT_MIN || i > INT_MAX) return 0;
        return (int)i;
    }
};