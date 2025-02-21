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
    printb(~a);
    printb(1<<3);
    printb(~(1<<3));
    printb(a&(~(1<<3)));

    // toggle bit:
    //toggle 2nd bit
    printb(a^(1<<2));
    printb(a^(1<<3));
    
    //setbit count
    printb(a);
    int ct=0;
    for(int i=31;i>=0;--i){
        if((a&(1<<i))!=0){
            ct++;
        }
    }
    cout<<ct<<endl;
    cout<<__builtin_popcount(a)<<endl;
    cout<<__builtin_popcountll((1LL<<35)-1)<<endl;

}
