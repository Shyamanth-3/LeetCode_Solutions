class Solution {
public:
    int romanToInt(string s) {
        int ri = 0;
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == 'I') {
                if (i + 1 < s.size() && s[i + 1] == 'V') {
                    ri += 4; i++;
                } else if (i + 1 < s.size() && s[i + 1] == 'X') {
                    ri += 9; i++;
                } else {
                    ri += 1;
                }
            }
            else if (s[i] == 'V') {
                ri += 5;
            }
            else if (s[i] == 'X') {
                if (i + 1 < s.size() && s[i + 1] == 'L') {
                    ri += 40; i++;
                } else if (i + 1 < s.size() && s[i + 1] == 'C') {
                    ri += 90; i++;
                } else {
                    ri += 10;
                }
            }
            else if (s[i] == 'L') {
                ri += 50;
            }
            else if (s[i] == 'C') {
                if (i + 1 < s.size() && s[i + 1] == 'D') {
                    ri += 400; i++;
                } else if (i + 1 < s.size() && s[i + 1] == 'M') {
                    ri += 900; i++;
                } else {
                    ri += 100;
                }
            }
            else if (s[i] == 'D') {
                ri += 500;
            }
            else if (s[i] == 'M') {
                ri += 1000;
            }
        }
        return ri;
    }
};