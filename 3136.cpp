class Solution {
public:
    bool isValid(string word) {
        int i, ch = 0, v = 0,n=0;
        if (word.size() < 3)
            return false;
        else {
            for (i = 0; i < word.size(); i++) {
                if (((word[i] >= 'a' && word[i] <= 'z') || (word[i] >= 'A' && word[i] <= 'Z')) || (word[i]>='0' && word [i]<='9')) {
                    if (word[i] == 'a' || word[i] == 'A')
                        v++;
                    else if (word[i] == 'e' || word[i] == 'E')
                        v++;
                    else if (word[i] == 'i'|| word[i] == 'I')
                        v++;
                    else if (word[i] == 'o' || word[i] == 'O')
                        v++;
                    else if (word[i] == 'u' || word[i] == 'U')
                        v++;
                    else if (word[i]>='0' && word [i]<='9')
                        n++;
                    else 
                        ch++;
                }
                else
                    return false;
            }
            if(ch!=0 && v!=0)
                return true;
            else
                return false;
        }
        return false;
    }
};