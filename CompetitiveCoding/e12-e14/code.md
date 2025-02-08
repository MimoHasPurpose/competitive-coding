# e12-e14
## Hashing
```
// array: N, queries Q, number X, print count of X:
// 1<=N<=10^5
// 1<=A[i]<=10^7
// 1<=Q<=10^5
#include<bits/stdc++.h>
using namespace std;
int main()
{
    cout<<"hello"<<endl;
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;++i){
        cin>>a[i];
    }
    int q;
    cin>>q;
    while(q--){
        int x;
        cin>>x;
        int ct=0;
        for(int i=0;i<n;++i){
            if(a[i]==x){
                ct++;
            }
        }
        cout<<ct<<endl;
    }

}
<!-- with hashing -->
int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;++i){
        cin>>a[i];
        hsh[a[i]]++;
    }
    int q;
    cin>>q;
    while(q--){
        int x;
        cin>>x;
        int ct=0;
        for(int i=0;i<n;++i){
            if(a[i]==x){
                ct++;
            }
        }
        cout<<ct<<endl;

```
## Prefix sum
```
int n;
cin>>n;

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


<!-- with hashing: -->
for(int i=1;i<=n;++i){
    cin>>a[i];
    pf[i]=f[i-1]+a[i];
}
cout<<pf[r]-pf[l-1]<<endl;

```