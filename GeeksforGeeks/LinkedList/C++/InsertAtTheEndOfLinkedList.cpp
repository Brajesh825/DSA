#include<iostream>
using namespace std;

struct Node
{
	int data;
	Node* next;

	Node(int x)
	{
		data=x;
		next=NULL;	
	}
};

void printList(Node* head)
{
	Node * curr = head;
	while(curr!=NULL)
	{
		cout<<curr->data<<' ';
		curr=curr->next;
	}
}

Node* insertAtTheBeginning(Node* head,int data)
{
	Node* temp = new Node(data);
	temp->next=head;
	return temp;
}

Node* insertAtTheEnd(Node* head,int data)
{
	if(head==NULL)
	{
		head = new Node(data);
		return head;
	}
	else
	{
		Node* temp=head;
		while(temp->next!=NULL)
			temp=temp->next;

		temp->next= new Node(data);
		return head;
	}
}

int main()
{
	Node* head = NULL;
	head=insertAtTheEnd(head,10);
	head=insertAtTheEnd(head,20);
	head=insertAtTheEnd(head,30); 
	printList(head);
	return 0; 
}