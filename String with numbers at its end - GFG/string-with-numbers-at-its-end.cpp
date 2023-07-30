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
	    
	    int len = 0;
	    int num = 0;
	    for(int i = 0 ; i<s.length() ; i++)
	    {
	        if((s[i] >='a' && s[i] <='z') || (s[i] >='A' && s[i] <='Z'))
	        {
	            len++;
	        }
	        else
	        {
	            num = num * 10 + (s[i]-'0');
	        }
	    }
	    
	    if(len == num)
	        return 1;
        return 0;
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