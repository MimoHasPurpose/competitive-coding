#include<bits/stdc++.h>
using namespace std;
int sum(int a, int b){
    return a+b;
}
int main(){
int a,b,c,d;
int final;
a=1;
b=2;
c=3;
d=4;
final=sum(sum(a,b),sum(c,d));
cout<<final<<endl;
return 0;


}