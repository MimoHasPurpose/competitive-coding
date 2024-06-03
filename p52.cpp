// Consecutive characters
class Solution
{
public:
    int maxPower(string s)
    {
        if (s.size() == 1)
            return 1;
        int maxi = INT_MIN;
        for (int i = 0; i < s.size();)
        {
            int count = 0;
            int j = i;
            while (s[i] == s[j] && j < s.size())
            {
                count++;
                j++;
            }
            maxi = max(count, maxi);
            i = j;
        }
        return maxi;
    }
};