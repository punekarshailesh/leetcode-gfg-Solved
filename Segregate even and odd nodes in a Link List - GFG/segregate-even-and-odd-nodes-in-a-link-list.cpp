//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    struct Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
};
void printList(Node* node) 
{ 
    while (node != NULL) { 
        cout << node->data <<" "; 
        node = node->next; 
    }  
    cout<<"\n";
} 


// } Driver Code Ends
//User function template for C++

/*
struct Node
{
    int data;
    struct Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
};
*/
class Solution{
public:
    Node* divide(int N, Node *head){
        // code here
        
        Node* oddCurr = NULL, *evenCurr = NULL , *even = NULL , *odd = NULL;
        
        Node* curr = head;
        
        while(curr)
        {
            if(curr->data%2)
            {
                if(!odd) {
                    odd = curr;
                    oddCurr = curr;
                } else {
                    oddCurr->next = curr;
                    oddCurr = oddCurr->next;
                }
            } 
            else 
            {
                if(!even) {
                    even = curr;
                    evenCurr = curr;
                } else {
                    evenCurr->next = curr;
                    evenCurr = evenCurr->next;
                }
            }
            
            curr = curr->next;
        }
        
        if(!even) {
            oddCurr->next = NULL;
            return odd;
        } else if(!odd) {
            evenCurr->next = NULL;
            return even;
        }
        
        evenCurr->next = odd;
        oddCurr->next = NULL;
        return even;
    }
};

//{ Driver Code Starts.

int main() {
    //code
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        int data;
        cin>>data;
        struct Node *head = new Node(data);
        struct Node *tail = head;
        for (int i = 0; i < N-1; ++i)
        {
            cin>>data;
            tail->next = new Node(data);
            tail = tail->next;
        }
        
        Solution ob;
        Node *ans = ob.divide(N, head);
        printList(ans); 
    }
    return 0;
}

// } Driver Code Ends