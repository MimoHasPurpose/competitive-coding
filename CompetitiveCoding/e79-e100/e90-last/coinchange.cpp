//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
  int func(int amount, vector<int>& coins){
        if(amount==0) return 0;
        int ans=INT_MAX;
        for(int coin:coins){
            if(amount-coin>=0)
            ans=min(ans,func(amount-coin,coins)+1);
        }
        return ans;
    }
    
    int minCoins(vector<int> &coins, int sum) {
        // code here
        
        int ans=func(sum,coins);
        return ans==INT_MAX?-1:ans;
    }
};


//{ Driver Code Starts.

int main() {
    string ts;
    getline(cin, ts);
    int t = stoi(ts);
    while (t--) {
        string ks;
        getline(cin, ks);
        int k = stoi(ks);
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        Solution obj;
        int res = obj.minCoins(arr, k);
        cout << res << endl;
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends