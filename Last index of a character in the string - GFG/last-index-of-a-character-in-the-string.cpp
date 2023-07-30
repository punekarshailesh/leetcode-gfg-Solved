//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
    public:
    
    int LastIndex(string s, char p){
        //complete the function here
        
        
        for(int i = s.length()-1 ; i>=0 ; i--)
        {
            if(s[i] == p)
            {
                return i;
            }
        }
        return -1;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        char p;
        cin >> p;
        Solution ob;
        cout << ob.LastIndex(s, p) << endl;
    }
    return 0;
}


// } Driver Code Ends