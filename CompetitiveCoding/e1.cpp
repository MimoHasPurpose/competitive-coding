// overflow, precision errors, calculation order
#include<bits/stdc++.h>
using namespace std;
int main(){
//    cout<<'c'+1<<endl;
//    cout<<3/2.0<<endl;
//    int mx=INT_MAX+1;
//    cout<<mx;
//    int a=100000;
//    int b=100000;
//	long int c=a*1LL*b;
//    cout<<c<<endl;
	double a=100000;
	double b=100000;
	double c=a*b;
	c=1e24;
	cout<<fixed<<c<<endl;	
}
