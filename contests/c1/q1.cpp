#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int x = 0;
    string s;
    for (int i = 0; i < n; i++)
    {
        cin >> s;
        if (s[0] == '+' || s[1] == '+' || s[2] == '+')
            x++;
        if (s[0] == '-' || s[1] == '-' || s[2] == '-')
            x--;
        s.erase(s.begin(), s.end());
    }

    cout << x << endl;
    return 0;
}