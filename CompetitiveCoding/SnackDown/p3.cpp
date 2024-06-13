// string hashing

#include <bits/stdc++.h>
using namespace std;

long long int calHash(string s)
{
    const int p = 31;
    const long long m = 1e9 + 9;
    long long hash = 0;
    long long x = 1;
    for (int i = 0; i < s.size(); i++)
    {
        // formula - multiply s[i]*p^i;
        hash = ((hash) + ((s[i] - 'a' + 1) * x)) % m;
        x = (x * p) % m;
    }
    return hash;
}
vector<long long> calHashArray(string s)
{
    vector<long long> h(s.size() + 1, 0);
    const int p = 31;
    const long long m = 1e9 + 9;

    long long x = 1;
    for (int i = 0; i < s.size(); i++)
    {
        // formula - multiply s[i]*p^i;
        h[i + 1] = ((h[i + 1]) + ((s[i] - 'a' + 1) * x)) % m;
        x = (x * p) % m;
    }
    return h;
}
int main()
{
    string txt, pat;
    cin >> txt >> pat;
    long long patternHash = calHash(pat);
    vector<long long> txtHash = calHashArray(txt);
    int M = pat.size();
    long long int x = 1;
    const int p = 31;
    const int m = 1e9 + 9;
    for (int i = 0; i < txt.size(); i++)
    {
        // for  current substring-txt[i....i+patsize-1]
        // compare above string's hash to patternhash
        long long current_hash = (h[i + M] - h[i] + m) % m;
        if (current_hash == (patternHash * x) % m)
        {
            cout << "Matches here" << endl;
        }
        x = (x * p) % m;
    }
    return 0;
}