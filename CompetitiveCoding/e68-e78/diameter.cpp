#include<bits/stdc++.h>
using namespace std;
const int N=1e5+10;
vector<int> g[N];

int depth[N];
void dfs(int v,int par=-1){ // parent =-1
    for(int child:g[v]){
        if(child==par)continue;
        depth[child]=depth[v]+1;
        dfs(child,v);
    }

}
int main()

{
    int n;
    cin>>n; // nodes in the tree.k
    for(int i=0;i<n-1;++i){
        int x,y;
        cin>>x>>y;
        g[x].push_back(y);
        g[y].push_back(x);
    }
    //fist dfs
    dfs(1);
    int mx_depth=-1;
    int mx_d_node;
    for(int i=1;i<=n;++i){
        if(mx_depth<depth[i]){
            mx_depth=depth[i];
            mx_d_node=i;
        }
        depth[i]=0;
    }
    //2nd dfs
    dfs(mx_d_node);
    mx_depth=-1;
    for(int i=1;i<=n;++i){
        if(mx_depth<depth[i]){
            mx_depth=depth[i];
            
        }

    }
    cout<<mx_depth<<endl;
}
