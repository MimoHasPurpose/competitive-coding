#include<bits/stdc++.h>
using namespace std;
// print modulo 47
int main()
{
int n;
cin>>n;
int M=47;
long long fact=1;
for(int i=2;i<=n;++i)
{
    fact=(fact*i)%M;
}
cout<<fact;

}
// (1*2*3*4*5)%47
