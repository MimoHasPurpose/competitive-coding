#include<bits/stdc++.h>
using namespace std;
int main()
{
    map<int,string> m;
    m[1]="abc"; // insertion O(log(n))
    m[5]="cde";
    m[3]="acd";
    m.insert({4,"afg"});
    m[6]; // empty value inserted.
    // can add same value again.
    map<int,string>:: iterator it;
    for(it =m.begin(); it!=m.end();++it){
        cout<<(*it).first<<" "<<(*it).second<<endl;
    }
    for (auto &pr :m)
    {
        cout<<pr.first<<" "<<pr.second<<endl;
    }
}
