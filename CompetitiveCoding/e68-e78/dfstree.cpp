#include<bits/stdc++.h>
using namespace std;
const int N=1e5+10;
vector<int> g[N];
int depth[N],height[N];
void dfs(int vertex,int par=0){
    //take action on vertex after entering the vertex.
    cout<<vertex<<endl;
    
    for(int child:g[vertex]){
        cout<<"par "<<vertex<<", child"<<child<<endl;
        if(child==par) continue;
        //take action on child before entering the child node.
        depth[child]=depth[vertex]+1;
        dfs(child,vertex);
        height[vertex]=max(height[vertex],height[child]+1);
        //take action on child after exiting child node.

    }
        //take action on vertex before exiting the vertex.

    // return isLoopExists;
}

int main()
{
    int n,m;
    cin>>n>>m;
    for(int i=0;i<n-1;++i){
        int v1,v2;
        cin>>v1>>v2;
        g[v1].push_back(v2);
        g[v2].push_back(v1);
    }    
     dfs(1);
     for(int i=1;i<=n;++i){
        cout<<depth[i]<<" "<<height[i]<<endl;
     }
    return 0;
}
