#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a[10] = {1, 2, 1, 2, 5, 3, 2, 2, 1, 2};
    int p[10] = {0};
    p[0] = a[0];
    for (int i = 1; i < 10; i++)
    {
        p[i] = p[i - 1] + a[i];
    }
    for (auto item : p)
        cout << item << endl;
    cout << p[4] - p[0] << endl;
    return 0;
}