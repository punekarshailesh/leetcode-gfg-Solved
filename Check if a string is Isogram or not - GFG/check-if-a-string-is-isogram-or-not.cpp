//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends


class Solution
{
    public:
    //Function to check if a string is Isogram or not.
    bool isIsogram(string s)
    {
        //Your code here
        
        int count[27] = {0};
        
        for(int i = 0 ; i<s.length() ; i++)
        {
            count[s[i]-'a'] += 1;
        }
        
        for(int i = 0; i<27 ; i++)
        {
            if(count[i] != 1 && count[i] != 0)
            {
                return 0;
            }
        }
        
        return 1;
    }
};

//{ Driver Code Starts.

int main()
 {
    int t;
    cin>>t;
    while(t--)
    {
        
        string s;
        cin>>s;
        Solution obj;
        cout<<obj.isIsogram(s)<<endl;
        
    }
	return 0;
}
// } Driver Code Ends