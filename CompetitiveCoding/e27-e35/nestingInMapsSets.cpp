#include<bits/stdc++.h>
using namespace std;
int main()
{
    // map<pair<int,int>,int>m;
    map<pair<string,string>,vector<int>> students;
    int n;
    cin>>n;
    for(int i=0;i<n;++i){
        string fn,ln;
        int ct;
        cin>>fn>>ln>>ct;
        for(int i=0;i<ct;++i){
            int x;
            cin>>x;
            students[{fn,ln}].push_back(x);
        }
    }

    for(auto pr:students){
        auto &full_name =pr.first;
        auto &list=pr.second;
        cout<<full_name.first<<" " <<full_name.second<<endl;
        cout<<list.size()<<endl;
        for(auto &element:list){
            cout<<element<<" ";
        }
        cout<<endl;
    }
    pair<int,int> p1,p2;
    p1={1,2};
    p2={2,3};
    cout<<(p1<p2)<<endl;
}
