#include<bits/stdc++.h>
using namespace std;
// swapping numbers with xor
int main()

{
    int a=4; 
    int b=6;
    a=a^b;
    b=b^a;
    a=a^b;
    cout<<b<<a<<endl;
    return 0;
}
