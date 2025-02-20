#include<bits/stdc++.h>
using namespace std;

void print(set<string> &s){
    for(string value:s){
        cout<<value<<endl;
    }
    for(auto it= s.begin();it!=s.end();++it)
    {
        cout<<(*it)<<endl;
    }
}

int main()
{
     set<string> s;
     set<set<string>> s2;
     s.insert("abc");
     s.insert("bcd");
     s.insert("efg");
     auto it=s.find("abc");
     print(s);
}
