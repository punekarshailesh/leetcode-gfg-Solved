//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

/* Link list Node */
struct Node
{
    int data;
    struct Node* next;
};

void print(struct Node *Node)
{
    while (Node!=NULL)
    {
        cout << Node->data << " ";
        Node = Node->next;
    }
}

struct Node * mergeResult(struct Node *node1,struct Node *node2);

Node *newNode(int data)
{
    Node *temp = new Node;
    temp->data = data;
    temp->next = NULL;
    return temp;
}

int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int nA;
        cin>>nA;
        int nB;
        cin>>nB;

        struct Node* headA=NULL;
        struct Node* tempA = headA;

        for(int i=0;i<nA;i++)
        {
            int ele;
            cin>>ele;
            if(headA==NULL)
            {
                headA=tempA=newNode(ele);

            }else{
                tempA->next = newNode(ele);
				tempA=tempA->next;
            }
        }

        struct Node* headB=NULL;
        struct Node* tempB = headB;


        for(int i=0;i<nB;i++)
        {
            int ele;
            cin>>ele;
            if(headB==NULL)
            {
                headB=tempB=newNode(ele);

            }else{
                tempB->next = newNode(ele);
				tempB=tempB->next;
            }
        }

        struct Node* result = mergeResult(headA,headB);

        print(result);
        cout<<endl;


    }
}

// } Driver Code Ends


/*

The structure of linked list is the following

struct Node
{
int data;
Node* next;
};

*/
#include <bits/stdc++.h>
struct Node * mergeResult(Node *node1,Node *node2)
{
    // your code goes here
    Node* temp = node1;
    while(temp->next)
    {
        temp = temp->next;
    }
    
    temp->next = node2;
    
    // copy elements in the array
    vector<int>ans;
    
    temp = node1;
    
    while(temp)
    {
        ans.push_back(temp->data);
        temp = temp->next;
    }
    
    sort(ans.begin(), ans.end() , greater<int>());
    
    temp = node1;
    
    for(int i = 0 ; i<ans.size() ; i++)
    {
        temp->data = ans[i];
        temp = temp->next;
    }
    
    return node1;
}