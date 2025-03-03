#include<bits/stdc++.h>
using namespace std;
const int M=1e9+7;

int binMultiply(long long a,long long b){
    int ans=0;
    while(b>0){
        if(b&1){
            ans=(ans+a)%M;
        }
        a=(a+a)%M;
        b>>=1;
    }
    return ans;
}

int main()
{
    cout<<binMultiply(10,5)<<endl;

}

