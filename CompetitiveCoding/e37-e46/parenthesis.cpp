
#include<bits/stdc++.h>
using namespace std;
vector<string>valid;
void generate(string &s,int open,int close){ // open amount and close amount added in a string s:
	if(open==0 && close==0){      // valid strings are added here.
		valid.push_back(s);
		return;
	}

	if(open>0){ 				  // if i can add more open brackets
		s.push_back('(');
		generate(s,open-1,close); // generate with open-1 and close.
		s.pop_back();			  // backtracking
	}
	if(close>0){
		if(open<close){
			s.push_back(')');
			generate(s,open,close-1);
			s.pop_back();
		}
	}
}

int main(){
	//generate parenthesis of n layer.
	int n;
	cin>>n;
	string s;
	generate(s,n,n);
	// cout<<"hello"<<endl;
	for(auto ele:valid){
		cout<<ele<<endl;
	}
	return 0;
}