//{ Driver Code Starts
//Initial Template for C++

// C program for implementation of Bubble sort
#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;

// swapping the elements
void swap(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}


// } Driver Code Ends
//User function Template for C++

class Solution
{
    public:
    //Function to sort the array using bubble sort algorithm.
    void bubbleSort(int arr[], int n)
    {
        // Your code here  
        
        
        int Max = INT_MIN;
        
        for(int i = 0 ; i<n ; i++)
        {
            if(arr[i] > Max)
            {
                Max = arr[i];
            }
        }
        int size = Max+1;
        int ans[size] = {0};
        
        for(int i = 0 ; i<n ; i++)
        {
            ans[arr[i]] += 1;
        }
        
        
        int k = 0;
        for(int i = 0 ; i<size ; i++)
        {
            if(ans[i] == 1)
            {
               arr[k++] = i;   
            }
            else if(ans[i] != 0 && ans[i] > 1)
            {
                // duplicates are present
                int count = ans[i];
                while(count--)
                {
                    arr[k++] = i;
                }
                
            }
            // else if(ans[i])
        }
        
    }
};


//{ Driver Code Starts.

/* Function to print an array */
void printArray(int arr[], int size)
{
    int i;
    for (i=0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}
 
// Driver program to test above functions
int main()
{
    int arr[1000],n,T,i;
  
    scanf("%d",&T);
    
    while(T--){
        
    scanf("%d",&n);
    
    for(i=0;i<n;i++)
      scanf("%d",&arr[i]);
      
    Solution ob;  
      
    ob.bubbleSort(arr, n);
    printArray(arr, n);
    }
    return 0;;
}
// } Driver Code Ends