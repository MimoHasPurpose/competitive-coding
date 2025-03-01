#include<bits/stdc++.h>
const int M=1e9+7;
using namespace std;
int binExpIter(int a,int b){
    int ans=1;
    while(b){
        //unit bit is 1
        if(b&1){
            ans=(ans*a)%M;
        }
        a=(a*a)%M;
        b>>=1; //b/2
    }
    return ans;
}
int main()
{
    int a=2,b=13;
    cout<<binExpIter(a,b)<<endl;
    cout<<pow(a,b)<<endl;
}
