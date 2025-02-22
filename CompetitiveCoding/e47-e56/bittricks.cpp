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
    // for(int i=0;i<8;++i){
    //     printb(i);
    //     if(i&1){
    //         cout<<" Odd"<<endl;

    //     }
    //     else{
    //         cout<<" Even"<<endl;
    //     }
    // }
    for(char c='A';c<='D';++c){
        cout<<c<<" ";
        cout<<int(c)<<" ";
        printb(int(c));
    }
    for(char c='a';c<='d';++c){
        cout<<c<<" ";
        cout<<int(c)<<" ";
        printb(int(c));
    }
    char A='A';
    char a=A|(1<<5);
    cout<<A<<a<<endl;
    
}
