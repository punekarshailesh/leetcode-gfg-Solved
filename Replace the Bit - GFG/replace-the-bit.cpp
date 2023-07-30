//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
    private:
    int power(int x)
    {
        if(x == 0)
            return 1;
        
        return 2<<(x-1);
    }
  public:
    int replaceBit (int n, int k)
    {
        //code here.
        
        vector<int>binary;
        
        while(n != 0)
        {
            int bits = n&1;
            binary.push_back(bits);
            n = n>>1;
        }
        
        for(int i = 0 , j=binary.size()-1 ; i<=j ; i++ , j--)
        {
            swap(binary[i] , binary[j]);
        }
        // cout << endl;
        int i;
        for(i = 0 ; i<k-1 ; i++)
        {
            
        }
        
        if(binary[i] == 1)
        {
            binary[i] = 0;
        }
        
        int ans = 0,count = 0;
        for(int i = binary.size()-1 ; i>=0 ; i--)
        {
            ans += binary[i]*power(count);
            count += 1;
        }
       
        return ans;
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k; cin >> n >> k;
        Solution ob;
        cout <<ob.replaceBit (n, k) << endl;
    }
    return 0;
}


// } Driver Code Ends