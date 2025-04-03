//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

// User function Template for C++

class Solution {
  public:
   int dp[1005];
    int func(int len, vector<int> &prices){
        if(len==0)  return 0;
        if(dp[len]!=-1) return dp[len];
        int ans=0;
        for(int len_to_cut=1;len_to_cut<=prices.size(); ++len_to_cut)
        {
            if(len-len_to_cut>=0){
                ans=max(ans,func(len-len_to_cut,prices)+prices[len_to_cut-1]);
            }
        }
        return dp[len]=ans;
    }
  
    int cutRod(vector<int> &price) {
        // code here
        memset(dp,-1,sizeof(dp));
        return func(price.size(),price);
        
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    scanf("%d ", &t);
    while (t--) {

        vector<int> a;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            a.push_back(number);
        }

        Solution ob;

        cout << ob.cutRod(a) << endl;
        cout << "~" << endl;
    }
    return 0;
}
// } Driver Code Ends