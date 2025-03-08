#include<bits/stdc++.h>
using namespace std;
const int N=1e5+10;
vector<int> g[N];
int subtree_sum[N];
int even_count[N];
int val[N];

void dfs(int vertex,int par=0){
    //take action on vertex after entering the vertex.
    
    subtree_sum[vertex]+=vertex;
    if(vertex%2==0)even_count[vertex]++;
    for(int child:g[vertex]){
    
        if(child==par) continue;
        //take action on child before entering the child node.
    
        dfs(child,vertex);
    
        //take action on child after exiting child node.
        subtree_sum[vertex]+=subtree_sum[child];
        even_count[vertex]+=even_count[child];

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
    dfs(1);
    for(int i=1;i<=n;i++){
        cout<<subtree_sum[i]<<" "<<even_count[i]<<endl;
    }
    // while(q--){
    //     int v;
    //     cin>>v;
        
    // }


}
