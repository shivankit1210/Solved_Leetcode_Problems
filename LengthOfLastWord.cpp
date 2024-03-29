class Solution
{
public:
    int lengthOfLastWord(string s)
    {
        int n = s.size();
        int res = 0;
        for (int i = n - 1; i >= 0; i--)
        {
            if (s[i] != ' ')
            {
                while (i >= 0 && s[i] != ' ')
                {
                    res++;
                    i--;
                }
                return res;
            }
        }
        return res;
    }
};