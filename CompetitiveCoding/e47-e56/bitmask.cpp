#include<bits/stdc++.h>
using namespace std;
// bitmasking: bit + mask
vector<vector<int>> subsets(vector<int>& nums){
    int n=nums.size();                          // array size
    int subset_ct=(1<<n);                       // no of subsets 2^n
    vector<vector<int>> subsets;                

    for(int mask=0;mask<subset_ct;++mask){      //mast 0-> subset_ct
        vector<int> subset;                     // subset
        for(int i=0;i<n;++i){
            if((mask&(1<<i))!=0){               //ith bit is 1
                subset.push_back(nums[i]);      //push in subset
            }
        }
        subsets.push_back(subset);              //push subset in subsets
    }
    return subsets;                             //return result
}
int main()
{
    // 23  1100
    // 012 0110
    // 13  1010
    // subset generation:
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;++i){
        cin>>v[i];
    }
    auto all_subsets=subsets(v);
    for(auto subset:all_subsets){
        for(int ele:subset){
            cout<<ele<<" ";
        }
        cout<<endl;
    }

}
