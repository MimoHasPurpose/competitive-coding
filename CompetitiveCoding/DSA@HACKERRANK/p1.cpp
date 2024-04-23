// Reverse a string
//{ Driver Code Starts
//Initial Template for C++


#include<bits/stdc++.h>
using namespace std;



// } Driver Code Ends
//User function Template for C++
#include<string>
class Solution

{
    public:
    string reverseWord(string str)
    
    {
        // Your code goes here
    
        int size=str.length();
        char reverse[size];
        int j=size-1;
    
        for(int i=0;i<size;i++)
    
        {
            reverse[j]=str.at(i);
            j--;
            
        }
        cout<<reverse<<endl;
        return reverse;
    }
};



//{ Driver Code Starts.

int main() {
	
	int t;
	cin>>t;
	while(t--)
	{
    	string s;
    	cin >> s;
    	Solution ob;
    	cout << ob.reverseWord(s) << endl;
	}
	return 0;
	
}


// } Driver Code Ends