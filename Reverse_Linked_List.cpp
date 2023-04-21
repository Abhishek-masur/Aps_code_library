#include <stdio.h>
#include <stdlib.h>
#include <iostream>
using namespace std;

struct Node {
    int data;
    struct Node *next;
    Node(int x)
    {
        data = x;
        next = NULL;
    }
};

/* Linked List Node structure:

struct Node
{
    int data;
    struct Node *next;
}

*/

// https://practice.geeksforgeeks.org/problems/reverse-a-linked-list/1

// Reverse Singly Linked List
// Given a Linked List reverse it

class Solution
{
    public:
    //Function to reverse a linked list.
    struct Node* reverseList(struct Node *head)
    {
        Node *prev=NULL,*current=head,*next_p;
        
        while(current){
            next_p=current->next;
            current->next=prev;
            
            prev=current;
            current=next_p;
        }
        head=prev;
        return head;
    }
    
};

void printList(struct Node *head)
{
    struct Node *temp = head;
    while (temp != NULL)
    {
       printf("%d ", temp->data);
       temp  = temp->next;
    }
}

/* Driver program to test above function*/
int main()
{
    int T,n,l,firstdata;
    cin>>T;

    while(T--)
    {
        struct Node *head = NULL,  *tail = NULL;

        cin>>n;
        
        cin>>firstdata;
        head = new Node(firstdata);
        tail = head;
        
        for (int i=1; i<n; i++)
        {
            cin>>l;
            tail->next = new Node(l);
            tail = tail->next;
        }
        
        Solution ob;
        head = ob. reverseList(head);
        
        printList(head);
        cout << endl;
    }
    return 0;
}