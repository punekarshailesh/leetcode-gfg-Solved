//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution{
  public:
     // Function to find majority element in the array
    // a: input array
    // size: size of input array
    int majorityElement(int a[], int size)
    {
        
        // your code here
        
        int Max = INT_MIN;
        for(int i = 0 ; i<size ; i++)
        {
            Max = max(Max, a[i]);
        }
        
        int S = Max+1;
        int * arr = new int[S];
        
        for(int i = 0 ; i<size ; i++)
        {
            arr[a[i]] += 1;
        }
        
        
        for(int i = 0 ; i<S ; i++)
        {
            if(arr[i] > (size/2))
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
        int n;
        cin >> n;
        int arr[n];
        
        for(int i = 0;i<n;i++){
            cin >> arr[i];
        }
        Solution obj;
        cout << obj.majorityElement(arr, n) << endl;
    }

    return 0;
}

// } Driver Code Ends