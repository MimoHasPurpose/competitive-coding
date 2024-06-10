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
bool KMP(string txt, string pat, vector<int> &pre, int N, int M)
{
    int i = 0;
    int j = 0;
    // i will move forward in text and j in pattern.
    while (i < N)
    {
        if (j == M)
        {
            return true;
        }
        // i =N-1,j=M-1, they are equal
        // i =N, j=M
        if (txt[i] == pat[j])
        {
            i++;
            j++;
        }
        else
        {
            // txt pointers -i that will move forward
            // pat pointer -j  will move back to pre[j-1]
            if (j != 0)
            {
                j = pre[j - 1];
            }
            else
            {
                i++;
            }
        }
    }
    return false;
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
    cout << endl;
    if (KMP(txt, pat, prefix, N, M))
    {
        cout << "Pattern found" << endl;
    }
    else
    {
        cout << "Not found!" << endl;
    }
    return 0;
}
