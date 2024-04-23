//{ Driver Code Starts
 
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	
		
		
	int isSame(string s)
	{
	    // Your code goes here
	    int a=s.length();
	    //cout<<a<<endl;
	    int lastdigit=(int)s.at(a-1)-48;
    //    cout<<lastdigit<<endl;
    //    cout<<a-1<<endl;
    int index2;
    for(int j=0;j<a;j++)
    {
        int temp=(int)s.at(i);
        if((temp>=48)&&(temp<=57))
        {
            cout<<s.at(i);
            index2=i;
        
        }
        break;
    }
    if(index2==lastdigit)
        {
            return 1;
        }else
        {
            return 0;
        }
	    
	    
	}
};

//{ Driver Code Starts.

int main() 
{
   	

   	ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
   
   	int t;
   	cin >> t;
   	while(t--)
   	{
   		string str;
   		cin >> str;
        Solution ob;
   		cout << ob.isSame(str) << "\n";
   	}

    return 0;
}
// } Driver Code Ends