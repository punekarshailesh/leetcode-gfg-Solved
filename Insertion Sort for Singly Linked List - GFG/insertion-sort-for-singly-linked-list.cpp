//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;

/* Link list node */
struct Node {
	int data;
	struct Node *next;
	Node(int x) {
		data = x;
		next = NULL;
	}
};

/* Function to print linked list */
void printList(struct Node *head)
{
	struct Node *temp = head;
	while (temp != NULL)
	{
		printf("%d ", temp->data);
		temp = temp->next;
	}
}




// } Driver Code Ends
//User function Template for C++

/*Link list node
struct Node {
	int data;
	struct Node *next;
	Node(int x) {
		data = x;
		next = NULL;
	}
};*/

class Solution
{
    private:
        void insertionSort(vector<int>&arr)
        {
            for(int i = 1 ; i<arr.size() ; i++)
            {
                int temp = arr[i];
                int j = i-1;
                while(j>=0 && arr[j] > temp)
                {
                    arr[j+1] = arr[j];
                    j--;
                }
                arr[j+1] = temp;
            }
        }
    public:
    Node* insertionSort(struct Node* head_ref)
    {
        //code here
        Node* temp = head_ref;
        vector<int>ans;
        
        while(temp)
        {
            ans.push_back(temp->data);
            temp = temp->next;
        }
        
        // sort(ans.begin() , ans.end());
        insertionSort(ans);
        
        temp = head_ref;
        for(int i = 0 ; i<ans.size() ; i++)
        {
            temp->data = ans[i];
            temp = temp->next;
        }
        return head_ref;
    }
    
};

//{ Driver Code Starts.
int main()
{
	int T;
	cin >> T;

	while (T--)
	{
		int n;
		cin >> n;

		Node *head = NULL;
		Node *temp = head;

		for (int i = 0; i < n; i++) {
			int data;
			cin >> data;
			if (head == NULL)
				head = temp = new Node(data);
			else
			{
				temp->next = new Node(data);
				temp = temp->next;
			}
		}

        Solution ob;

		head = ob.insertionSort(head);
		printList(head);

		cout << "\n";



	}
	return 0;
}
// } Driver Code Ends