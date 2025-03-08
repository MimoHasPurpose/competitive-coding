#include<bits/stdc++.h>
using namespace std;
const int N=1e5+10;
vector<int> g[N];

void dfs(int vertex,int par=0){
    //take action on vertex after entering the vertex.
    
    
    for(int child:g[vertex]){
    
        if(child==par) continue;
        //take action on child before entering the child node.
    
        dfs(child,vertex);
    
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
    int q;


}
