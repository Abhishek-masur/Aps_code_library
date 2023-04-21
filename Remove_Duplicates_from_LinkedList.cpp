//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};


void print(Node *root)
{
    Node *temp = root;
    while(temp!=NULL)
    {
    cout<<temp->data<<" ";
    temp=temp->next;
    }
}
Node* removeDuplicates(Node *root);
int main() {
	// your code goes here
	int T;
	cin>>T;

	while(T--)
	{
		int K;
		cin>>K;
		Node *head = NULL;
        Node *temp = head;

		for(int i=0;i<K;i++){
		int data;
		cin>>data;
			if(head==NULL)
			head=temp=new Node(data);
			else
			{
				temp->next = new Node(data);
				temp=temp->next;
			}
		}
		
		Node *result  = removeDuplicates(head);
		print(result);
		cout<<endl;
	}
	return 0;
}
// } Driver Code Ends


/*
struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};*/

//Remove duplicates from sorted linked list.

// https://practice.geeksforgeeks.org/problems/remove-duplicate-element-from-sorted-linked-list/1
// https://leetcode.com/problems/remove-duplicates-from-sorted-list/description/

// Given a singly linked list consisting of N nodes.
// The task is to remove duplicates (nodes with duplicate values) 
// from the given list (if exists).

Node *removeDuplicates(Node *head)
{
    Node *cur=head,*nextn;
    
    while(cur!=NULL){
        nextn=cur->next;
        if(nextn!=NULL){
            if(nextn->data!=cur->data){
                cur=nextn;    
            }
            else{
                cur->next=nextn->next;      
            }
        }
        else
            break;
    }
    return head;
}