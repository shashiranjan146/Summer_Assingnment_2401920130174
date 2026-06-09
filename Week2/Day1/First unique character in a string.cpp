class Solution
{
public:
    int firstUniqChar(string s)
    {
        vector<int> count(26, 0);
        for (int i = 0; i < s.size(); i++)
        {
            char c = s[i];
            count[c - 'a']++;
        }
        for (int i = 0; i < s.size(); i++)
        {
            if (count[s[i] - 'a'] == 1)
                return i;
        }

        return -1;
    }
};