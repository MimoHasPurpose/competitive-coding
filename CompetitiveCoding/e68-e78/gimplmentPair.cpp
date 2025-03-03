#include<bits/stdc++.h>
// implementing basic graph storage.
// weighted undirected graphs.
using namespace std;
const int N=1e3+10;
vector<pair<int,int>graph2[N];
int main()
{
    int n,m;
    cin>>n>>m;
    for(int i=0;i<m;++i){
        int v1,v2;
        cin>>v1>>v2>>wt; // note we have a third input as weight.

        graph2[v1].push_back({v2,wt});
        graph2[v2].push_back({v1,wt});
    }
    

}

