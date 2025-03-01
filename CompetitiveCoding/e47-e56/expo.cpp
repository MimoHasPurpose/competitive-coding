#include<bits/stdc++.h>
const int M=1e9+7;
using namespace std;
innt binExpRecur(int a,int b){
    if(b==0)
    {
        return 1;
    }
    long long res=binExpRecur(a,b/2);
    if(b&1){
        //odd condition
        return a*((res*res)%M)%M;
    }
    else
    {   //even condition
        return (res*res)%M;
    }
}
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
