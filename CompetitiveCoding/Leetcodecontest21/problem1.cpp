#include<iostream>
using namespace std;

int main(){
string s="Ss";
cout<<s.at(0);
cout<<(int)s.at(0)<<endl;
int a,b;
a=(int)s.at(0);
b=(int)s.at(1);
cout<<a-b<<endl;
//cout<<mod(a-b)<<endl;
return 0;
}