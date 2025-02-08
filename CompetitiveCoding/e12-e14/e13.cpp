#include<bits/stdc++.h>
using namespace std;
int main()
{
int n;
cin>>n;
for(int i=1;i<=n;++i){
    cin>>a[i];
    pf[i]=f[i-1]+a[i];
}
int q;
cin>>q;
while(q--){
    int l,r;
    cin>>l>>r;
    long long sun=0;
    for(int i=l,i<=r;++i){
        sum+=a[i];
    }
    cout<<sum<<endl;
}
}
