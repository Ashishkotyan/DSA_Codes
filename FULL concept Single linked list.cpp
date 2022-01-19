#include <bits/stdc++.h>
using namespace std;

class Node{
	public:
		int data;
		Node* next;
		
		
};

void push(Node**head, int val)
{
	
	Node* new_node = new Node();
	
	new_node->data = val;
	new_node->next = *head;
	*head = new_node;
	
}

void after(Node *head, int val)
{
	
	Node* new_node = new Node();
	new_node->data = val;
	new_node->next = head->next;
	head->next = new_node;
	
}

void last(Node** head, int val)
{
	
	Node* new_node = new Node();
	new_node->data = val;
	new_node->next = NULL;
	Node* last = *head;
	
	while(last->next!=NULL)
	{
		last = last->next;
	}
	last->next = new_node;
	
}

void deleteNode(Node* head,int key)
{
	Node* temp = head;
	Node* prev = NULL;
	
	while(temp!=NULL && temp->data!=key)
	{
		prev = temp;
		temp = temp->next;
		
	}
	prev->next = temp->next;
	delete(temp);
		
	
}
void delete_poss(Node* head, int poss)
{
	
	
	Node* temp = head;
	for(int i=0; temp!=NULL && i<poss-1;i++)
	{
		temp = temp->next;
		
	}
	
	Node* next = temp->next->next;
	free(temp->next);
	temp->next = next;
	
}

void print(Node* head)
{
	Node* temp = head;
	
	while(temp!=NULL)
	{
		cout<<temp->data<<"->";
		temp = temp->next;
	}
	cout<<"NULL"<<endl;
}


int main()
{
	Node* head = NULL;
	
	push(&head,1);
	push(&head,2);
	push(&head,3);
	print(head);
	after(head,4);
	cout<<"After> \n";
	print(head);
	last(&head,6);
	cout<<"Last-> \n";
	print(head);
	deleteNode(head,4);
	cout<<"Detele-> with key\n";
	print(head);
	delete_poss(head,2);
	cout<<"Detele-> with possition\n";
	print(head);	
	
}





