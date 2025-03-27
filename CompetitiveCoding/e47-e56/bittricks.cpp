#include<bits/stdc++.h>
using namespace std;
void printb(int num){
    for(int i=15;i>=0;--i){
        cout<<((num>>i)&1);
    }
    cout<<endl;
 }
void oddeven(int i){
     if(i&1){
            cout<<" Odd"<<endl;

        }
        else{
            cout<<" Even"<<endl;
        }
}
void divideby2(int num){
    cout<<(num>>1)<<endl;
}
void multiplyby2(int num){
    cout<<(num<<1)<<endl;
}

void upper(){

}
void lower(){

}
int main()
{

    for(int i=1;i<=4;i++){
        printb(i);
        oddeven(i);
    }
    divideby2(10);
    multiplyby2(10);
    // upper case and lowercase letters.
    // for(char c='A';c<='D';++c){
    //     cout<<c<<" ";
    //     cout<<int(c)<<" ";
    //     printb(int(c));
    // }
    // for(char c='a';c<='d';++c){
    //     cout<<c<<" ";
    //     cout<<int(c)<<" ";
    //     printb(int(c));
    // }
    // char A='A';
    // char a=A|(1<<5);
    // cout<<A<<a<<endl;
    // cout<<char((a&(~(1<<5))))<<endl;
    // printb(59);                                                                                                                                                                                                                                 
    // int a=59;
    // int i=4;
    // int b=(a&(~((1<<(i+1))-1)));
    // printb(b);
}
