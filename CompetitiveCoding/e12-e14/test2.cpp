#include <bits/stdc++.h>
using namespace std;

int digit(int n)
{
    if (n == 0)
        return 0;
    return n % 10 + digit(n / 10);
}
int main()
{
    int n = 1232345;
    int ans = digit(n);
    cout << ans << endl;
    return 0;
}