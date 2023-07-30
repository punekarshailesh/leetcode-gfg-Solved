//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
class Solution
{   
public:
    vector<int> countChars (string s)
    {
        // code here
        
        vector<int>count;
        int ans = 0;
        for(int i = 0 ; i<s.length() ; i++)
        {
            if(s[i] == ' ')
            {
                count.push_back(ans);
                ans = 0;
                continue;
            }
            else
            {
                ans++;
            }
        }
        count.push_back(ans);
        return count;
    }
};

//{ Driver Code Starts.
int main()
{
    int t; 
    cin >> t;
    cin.ignore ();
    while (t--)
    {
        string s;
        getline (cin, s);
        Solution ob;
        vector <int> result = ob.countChars(s);
        for (int i : result)
            cout << i << " ";
        cout << endl;
    }
}
// } Driver Code Ends