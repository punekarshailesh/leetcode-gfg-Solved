#include <iostream>
using namespace std;

class Node
{
private:
    int data;
    Node *next;

public:
    // constructor
    Node(int input)
    {
        data = input;
        next = NULL;
    }

    void insertionAfterHead(Node *&head, int input)
    {
        Node *newnode = new Node(input);
        if (head == NULL)
        {
            head = newnode;
        }
        else
        {
            Node *temp = head;

            while (temp->next != NULL)
            {
                temp = temp->next;
            }
            temp->next = newnode;
        }
    }

    void printList(Node *&head)
    {
        Node *temp = head;
        while (temp != NULL)
        {
            cout << temp->data;
            if (temp->next != NULL)
            {
                cout << " -> ";
            }
            temp = temp->next;
        }
        cout << endl;
    }
    Node *removeDuplicatesFromSortedList(Node *&head)
    {
        if (head == NULL)
        {
            // list is empty
            return NULL;
        }
        else
        {
            Node *temp = head;
            while (temp != NULL && temp->next != NULL)
            {
                if (temp->data == temp->next->data)
                {
                    Node *todelete = temp->next;
                    temp->next = temp->next->next;
                    todelete->next = NULL;
                    delete todelete;
                }
                else
                {
                    temp = temp->next;
                }
            }
            return head;
        }
    }
};

int main()
{

    Node *head = NULL;

    int n;

    // number of nodes
    cin >> n;
    int input;
    while (n--)
    {
        cin >> input;
        head->insertionAfterHead(head, input);
    }

    head->removeDuplicatesFromSortedList(head);
    head->printList(head);

    return 0;
}