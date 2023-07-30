//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution{
    
    private:
    bool checkVowel(char ch)
    {
        if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch=='u')
            return true;
        else if(ch == 'A' || ch=='E' || ch=='I' || ch=='O' || ch=='U')
            return true;
        return false;
    }
    public:
    string removeConsonants(string s){
    //complete the function heredef removeConsonants(s):
    
        string str="";
        
        for(int i = 0 ; i<s.length() ; i++)
        {
            if(checkVowel(s[i]))
            {
                str.push_back(s[i]);
            }
        }
        
        if(str.length() == 0)
            return "No Vowel";
        return str;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        Solution ob;
        cout << ob.removeConsonants(s) << "\n";
    }
return 0;
}
// } Driver Code Ends