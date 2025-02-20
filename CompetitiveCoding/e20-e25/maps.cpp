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
    // value at loc(x) can be updated.
    map<int,string>:: iterator it;
    for(it =m.begin(); it!=m.end();++it){
        cout<<(*it).first<<" "<<(*it).second<<endl;
    }
    for (auto &pr :m)
    {
        cout<<pr.first<<" "<<pr.second<<endl;
    }
    auto its=m.find(3); // O(log(n))
    if(its!=m.end())
        m.erase(3);          // O(log(n))
    m.clear(); // cleans map.
        // if(it==m.end()){
    //     cout<<"No value";
    // }else
    // {
    //     cout<<(*its).second<<endl;
    // }
    map<string,string>m;
    ["abcd"]="abcd"; // s.size()*log(n)
}
