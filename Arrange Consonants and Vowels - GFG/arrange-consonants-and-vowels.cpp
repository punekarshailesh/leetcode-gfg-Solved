//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

struct Node
{
	char data;
	struct Node *next;
	
	Node(int x){
	    data = x;
	    next = NULL;
	}
	
};

void printlist(Node *head)
{
	if (head==NULL)return;
	while (head != NULL)
	{
		cout << head->data << " ";
		head = head->next;
	}
	cout << endl;
}

void append(struct Node** headRef, char data)
{
	struct Node* new_node = new Node(data);
	struct Node *last = *headRef;

	if (*headRef == NULL)
	{
	    *headRef = new_node;
	    return;
	}
	while (last->next != NULL)
		last = last->next;
	last->next = new_node;
	return;
}

// task is to complete this function
struct Node* arrange(Node *head);

int main()
{
    int T;
    cin>>T;
    while(T--){
        int n;
        char tmp;
        struct Node *head = NULL;
        cin>>n;
        while(n--){
            cin>>tmp;
            append(&head, tmp);
        }
        head = arrange(head);
        printlist(head);
    }
	return 0;
}


// } Driver Code Ends


/*
Structure of the node of the linked list is as
struct Node
{
	char data;
	struct Node *next;
	
	Node(int x){
	    data = x;
	    next = NULL;
	}
	
};
*/
// task is to complete this function
// function should return head to the list after making 
// necessary arrangements
struct Node* arrange(Node *head)
{
   //Code here
   
   vector<char>ans;
   
   Node* temp = head;
   
   // pushing data in array
   while(temp)
   {
       ans.push_back(temp->data);
       temp = temp->next;
   }
   
   
   // check for vowels and consonants
   vector<char>vowels;
   vector<char>conso;
   
   for(int i = 0 ; i<ans.size() ; i++)
   {
       if(ans[i] == 'a' || ans[i] == 'e' || ans[i] == 'i' || ans[i] == 'o' || ans[i] == 'u')
       {
           vowels.push_back(ans[i]);
       }
       else
       {
           conso.push_back(ans[i]);
       }
   }
   
   temp = head;
   
   // copying vowels
   for(int i = 0 ; i<vowels.size() ; i++)
   {
       temp->data = vowels[i];
       temp = temp->next;
   }
   
   // copying consonants
   for(int i = 0 ; i<conso.size() ; i++)
   {
       temp->data = conso[i];
       temp = temp->next;
   }
   
   return head;
}
