#include<bits/stdc++.h>
using namespace std;
void printb(int num){
    for(int i=10;i>=0;--i){
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

void uppercase(char low){
    cout<<char(low&(~(1<<5)))<<endl;
}
void lowercase(char upp){
    char low=upp|(1<<5);
    cout<<low<<endl;
}
void ClearLSBuptoi(int num,int i){
    int result;
    result=(num&(~((1<<(i+1))-1)));
    cout<<result<<endl;
    printb(result);

}
void ClearMSBuptoi(int num,int i){
    int result;
    result=(num&((1<<(i+1))-1));
    cout<<result<<endl;
    printb(result);
}
void PowerOfTwo(int n){
    if(n&(n-1)) cout<<":not power of 2:"<<endl;
    else        cout<<":power of 2:"<<endl; 
}
int main()
{
    
    cout<<44<<endl;
    printb(44);
    ClearLSBuptoi(59,4);
    ClearMSBuptoi(59,4);
    PowerOfTwo(32);
    // char input;
    // cin>>input;
    // lowercase(input);
    // char input2;
    // cin>>input2;
    // uppercase(input2);
    // cout<<A<<a<<endl;
    // cout<<char((a&(~(1<<5))))<<endl;

    // for(int i=1;i<=4;i++){
        // printb(i);
        // oddeven(i);
    // }
    // divideby2(10);
    // multiplyby2(10);
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
    
    // printb(59);                                                                                                                                                                                                                                 
    // int a=59;
    // int i=4;
    // int b=(a&(~((1<<(i+1))-1)));
    // printb(b);
}
