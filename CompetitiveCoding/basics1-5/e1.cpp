// overflow, precision errors, calculation order
#include <bits/stdc++.h>
using namespace std;
int main()
{
	//    cout<<'c'+1<<endl;
	//    cout<<3/2.0<<endl;
	//    int mx=INT_MAX+1;
	//    cout<<mx;
	//    int a=100000;
	//    int b=100000;
	//	long int c=a*1LL*b;
	//    cout<<c<<endl;
	double a = 100000;
	double b = 100000;
	double c = a * b;
	c = 1e24;
	// cout<<fixed<<c<<endl;
	// cout << 'z' - 'a' << endl;
	// cout << 4.0 / 2.0 << endl;
	// cout << INT_MAX << endl;
	// cout << INT_MIN << endl;
	long int cd = 100 * 1LL * 100;
	// cout << cd << endl;
	long int alpha = 1e9;
	cout << alpha << endl;
}
