class Solution {
public:
    bool isPalindrome(string s) {
          
        string t = "";

        for(char ch : s)
        {
            if(isalnum(ch))
            {
                t += tolower(ch);
            }
        }
        int start = 0 , end = t.size()-1;

        while(start <= end)
        {
            if(t[start] != t[end])
            {
                return false;
            }
            start++;
            end--;
        }
        return true;
    }
};
