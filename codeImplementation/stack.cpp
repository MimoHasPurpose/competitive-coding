#include<bits/stdc++.h>
using namespace std;

// #task: print elements of stack
void print(stack<int> a){
    while(!a.empty()){
        cout<<a.top()<<endl;
        a.pop();
    }
}
int main()
{
    stack<int> aa;
    int a,b,c,d;
    a=10,b=20,c=30,d=40;
    
    aa.push(a);
    aa.push(b);
    aa.push(c);
    aa.push(d);    
  
    
    print(aa);
    return 0;
}
