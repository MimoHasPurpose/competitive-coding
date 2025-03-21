
#include<bits/stdc++.h>
using namespace std;

void generate(string s,int open,int close){
	if(open==0 && close==0){
		valid.push_back(s);
		return;
	}
	if(open>0){
		s.push_back('(');
		generate(s,open-1,close);
		s.pop_back();
	}
	if(close>0){
		
	}
}

int main(){
	//generate parenthesis of n layer.

	return 0;
}