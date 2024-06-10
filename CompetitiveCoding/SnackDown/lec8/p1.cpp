// KMP ALGORITHM
#include <bits/stdc++.h>
using namespace std;

// -----PREFIX FUNCTION----------------
vector<int> calPrefix(string pat, int N)
{
    int i = 0, j = 1;
    vector<int> prefix(N);
    prefix[0] = 0;
    while (j < N)
    {
        if (pat[i] == pat[j])
        {
            prefix[j] = i + 1;
            i++;
            j++;
        }
        else
        {
            if (i == 0)
            {
                prefix[j] = 0;
                j++;
            }
            else
            {
                i = prefix[i - 1];
            }
        }
    }
    return prefix;
}
int main()
{
    string txt, pat;
    cin >> txt >> pat;
    int N = (int)txt.size();
    int M = (int)pat.size();
    vector<int> prefix = calPrefix(pat, M);
    for (int i = 0; i < M; i++)
    {
        cout << prefix[i] << " ";
    }
    return 0;
}
