#include<bits/stdc++.h>
using namespace std;
const int N=1e5+10;
vector<int>g[N];
int subtre_sum[N];
int val[N];
const int M=1e9+7;

void dfs(int vertex, int par){
    subtre_sum[vertex]+=val[vertex];
    for(int child:g[vertex]){
        if(child==par)continue;
        dfs(child,vertex);
    }

}
int main()
{

    int n;
    cin>>n;
    // Input node values
    for(int i = 1; i <= n; i++) {
        cin >> val[i];
    }
    for(int i=0;i<n-1;++i){
        int x,y;
        cin>>x>>y;
        g[x].push_back(y);
        g[y].push_back(x);

    }
    dfs(1,0);
    long long ans=0;
    for(int i=2;i<=n;++i){
        int part1=subtre_sum[i];
        int part2=subtre_sum[1]-part1;
        ans=max(ans,(part1*1LL*part2)%M);
    }
    cout<<endl;
    cout<<endl;
    cout<<ans<<endl;
}
