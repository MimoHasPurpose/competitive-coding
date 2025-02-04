#include<bits/stdc++.h>
using namespace std;
int main(){
	string s;
	cin>>s;
	int last_digit=s[s.size()-1]-'0';
	int first_digit=s[0]-'0';
	cout<<first_digit<<endl;
	cout<<last_digit<<endl;
	return 0;
}
