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
int main()
{
    string A, B;
    cin >> A >> B;
    if (calHash(A) == calHash(B))
    {
        cout << "Equal! " << endl;
    }
    else
    {
        cout << "Not Equal! " << endl;
    }
    cout << calHash("umang") << endl;
    cout << calHash("umansg") << "\n";

    return 0;
}