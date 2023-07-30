//{ Driver Code Starts
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

/* Function to get the middle of the linked list*/
struct Node *deleteMid(struct Node *head);
void printList(Node* node) 
{ 
	while (node != NULL) { 
		cout << node->data <<" "; 
		node = node->next; 
	}  
	cout<<"\n";
} 
int main() 
{ 
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;

		int data;
		cin>>data;
		struct Node *head = new Node(data);
		struct Node *tail = head;
		for (int i = 0; i < n-1; ++i)
		{
			cin>>data;
			tail->next = new Node(data);
			tail = tail->next;
		}
		head = deleteMid(head);
		printList(head); 
	}
	return 0; 
} 



// } Driver Code Ends


/* Link list Node:

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

// Deletes middle of linked list and returns head of the modified list


Node* deleteMid(Node* head)
{
    // Your Code Here
    
    Node* temp = head;
    
    int count = 0;
    
    // counting number of nodes
    
    while(temp)
    {
        count += 1;
        temp = temp->next;
    }
    
    if(count == 1)
    {
        delete head;
        return NULL;
    }
    temp = head;
    int mid = 0;
    if(count%2 == 0)
    {
        // even no of nodes
        mid = count/2;
        for(int i = 0 ; i<mid-1 ; i++)
        {
            temp = temp->next;
        }
        Node* Delet = temp->next;
        temp->next = temp->next->next;
        Delet->next = NULL;
        delete Delet;
        return head;
        
    }
    else
    {
        // odd no of nodes
        mid = count/2;
        for(int i = 0 ; i<mid-1 ; i++)
        {
            temp = temp->next;
        }
        Node* Delete = temp->next;
        temp->next = temp->next->next;
        Delete->next = NULL;
        delete Delete;
        return head;
    }
}