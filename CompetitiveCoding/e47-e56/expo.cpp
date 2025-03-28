#include<bits/stdc++.h>
const int M=1e9+7;
using namespace std;
int main()
{
    int a=2;int b=13;
    int ans=1;
    for(int i=0;i<b;++i){
        ans+=a;
        ans%=M;
    }
    cout<<ans<<endl;
} 
