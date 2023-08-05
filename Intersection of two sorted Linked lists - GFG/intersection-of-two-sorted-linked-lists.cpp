//{ Driver Code Starts
//

#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node *next;
    Node(int val)
    {
        data=val;
        next=NULL;
    }
};

Node* inputList(int size)
{
    Node *head, *tail;
    int val;
    
    cin>>val;
    head = tail = new Node(val);
    
    while(--size)
    {
        cin>>val;
        tail->next = new Node(val);
        tail = tail->next;
    }
    
    return head;
}

void printList(Node* n)
{
    while(n)
    {
        cout<< n->data << " ";
        n = n->next;
    }
}

Node* findIntersection(Node* head1, Node* head2);

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	    int n,m;
	    cin>> n >> m;
	    
	    Node* head1 = inputList(n);
	    Node* head2 = inputList(m);
	    
	    Node* result = findIntersection(head1, head2);
	    
	    printList(result);
	    cout<< endl;
	}
	return 0;
}

// } Driver Code Ends


/* The structure of the Linked list Node is as follows:

struct Node
{
    int data;
    Node *next;
    Node(int val)
    {
        data=val;
        next=NULL;
    }
};

*/

Node* findIntersection(Node* head1, Node* head2)
{
    // Your Code Here
    
    int Max = INT_MIN; 
    Node* temp = head1;
    
    while(temp->next)
    {
        temp = temp->next;
    }
    
    temp->next = head2;
    
    while(temp)
    {
        if(temp->data > Max)
        {
            Max = temp->data;
        }
        temp = temp->next;
    }
    int size = Max+1;
    vector<int>ans(size , 0);
    
    temp = head1;
    while(temp)
    {
        ans[temp->data] += 1;
        temp = temp->next;
    }
    
    vector<int>arr;
    
    for(int i = 0 ; i<size ; i++)
    {
        if(ans[i] > 1)
        {
            if(ans[i] > 2)
            {
                int count = 1;
                while(count < ans[i]-1)
                {
                    arr.push_back(i);
                    count += 1;
                }
            }
            else
            {
                arr.push_back(i);
            }
        }
    }
    
    Node* head = NULL;
    head = new Node(arr[0]);
    temp = head;
    for(int i = 1 ; i<arr.size() ; i++)
    {
        Node* newnode = new Node(arr[i]);
        temp->next = newnode;
        temp = newnode;
    }
    return head;
}