// Remove duplicate letters.
class Solution
{
public:
    string removeDuplicateLetters(string s)
    {
        vector<int> lastIndex(26, -1);
        for (int i = 0; i < s.size(); i++)
            lastIndex[s[i] - 'a'] = i;

        vector<bool> check(26, false);
        stack<char> st;
        for (int i = 0; i < s.size(); i++)
        {
            int c = s[i] - 'a';
            if (check[c])
                continue;
            while (!st.empty() && s[i] < st.top() && lastIndex[st.top() - 'a'] > i)
            {
                check[st.top() - 'a'] = false;
                st.pop();
            }
            st.push(s[i]);
            check[c] = true;
        }
        string ans = "";
        while (!st.empty())
        {
            ans += st.top();
            st.pop();
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};