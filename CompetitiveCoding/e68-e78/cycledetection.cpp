//Detecting cycles.
#include<bits/stdc++.h>
using namespace std;
const int N=1e5+10;
vector<int> g[N];
vector<vector<int>>cc;
vector<int>current_cc;
bool vis[N];

void dfs(int vertex,int parent){
    //take action on vertex after entering the vertex.
    // cout<<vertex<<endl;
    
    vis[vertex]=true;
    current_cc.push_back(vertex);
    for(int child:g[vertex]){
        // cout<<"par "<<vertex<<", child"<<child<<endl;
        if(vis[child]) continue;

        //take action on child before entering the child node.
        dfs(child);

        //take action on child after exiting child node.

    }
        //take action on vertex before exiting the vertex.

    // return isLoopExists;
}

int main()
{
    int n,e;
    cin>>n>>e;
    for(int i=0;i<e;++i){
        int x,y;
        cin>>x>>y;
        g[x].push_back(y);
        g[y].push_back(x);
    }    
     int ct=0;
     for(int i=1;i<=n;++i){
        if(vis[i])continue;
        current_cc.clear();
        dfs(i);
        cc.push_back(current_cc);
        ct++;
     }
     cout<<endl;
     cout<<cc.size()<<endl;
     for(auto c_cc:cc){
        for(int vertex:c_cc){
            cout<<vertex<<" ";
        }
        cout<<endl;
     }
    return 0;
}
