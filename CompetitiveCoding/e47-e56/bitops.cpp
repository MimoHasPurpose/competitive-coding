// TASK:
// set,unset, count_bits.
#include<bits/stdc++.h>
using namespace std;
 void printb(int num){
    for(int i=10;i>=0;--i){
        cout<<((num>>i)&1);
    }
    cout<<endl;
 }
int main()
{
    printb(9);
    int a=9;
    int i=3;
    if((a&(i<<i))!=0){
        cout<<"set bit! ";
    }
    else
    {
        cout<<"Not set bit! ";
    }
    // set bit
    printb(a| (1<<1));
    // unset bit
    
}
