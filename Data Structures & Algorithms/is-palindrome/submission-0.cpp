class Solution {
public:
    bool isPalindrome(string s) {
        string temp="";
        bool isSame=true;
        for(char i : s)
        {
            if(i != ' ' && isalnum(i))
            {
                i=tolower(i);
                temp+=i;
            }
        }
        int y= temp.length()-1;
        for(int i =0;i<temp.length() && y>0;i++)
        {
            if(temp[i]==temp[y])
            {
                isSame = true;
            }
            else
            {
                return false;
            }
            y--;
        }
        return isSame;
    }
};
