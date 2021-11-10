#include<iostream>
using namespace std;

class Node{
	public:
	int data;
	Node*  next;;
};
void push(Node**head, int val)
{
	Node* new_node = new Node();
	new_node->data = val;
	new_node->next = *head;
	*head = new_node;
	
	
}

void circular(Node* head)
{
	Node*  temp = head;
	Node* cir;
	while(temp->next!=NULL)
	{
		
		temp = temp->next;
	}
	
	temp->next = head;
}


void  Cir_find(Node* head)
{
	Node* temp = head->next;
	while(temp->next->data!=head->data)
	{
		temp=temp->next;
	}
	
	cout<<"\nCircular Linked list Point= "<<temp->next->data<<endl;
	
}

//Node* middle(Node* head)
//{
//	Node* slow = head;
//	Node* fast = head;
//	Node* lmid = head;  // finding for mid;
//	Node* Right = head;   
//	Node* left = head;
//	while(fast!=NULL && fast->next!=head)
//	{
//		slow = slow->next;
//		fast = fast->next->next;
//	}
////	cout<<slow->next->data;
//	lmid = slow;
////	return slow;
//
////Left part split and save into left 
//	while(left!=lmid)
//	{
//		
//		left = left->next;
//		
//	}
//		
//	left->next = lmid;
//	
//	left = left;
//	
//
/////Right part split and save int Right
//	Right = slow->next;
//	cout<<slow->next->data;	
//	while(Right->next !=slow->next)
//	{
//		Right = Right->next;
//		
//	}
//	Right->next = slow->next;
	
void split(Node* head)
{
	Node* slow = head;
	Node* fast = head->next;
	while(fast!=NULL and(fast->next)!=head)
	{
		slow = slow->next;
		fast = fast->next->next;
	}
	Node* head1 = head;
	Node* head2 = slow->next;
	slow->next = head1;
	Node* cur = head2;
	while(cur->next!=head)
	{
		cur->next = head2;
	}
	cur->next = head2;
	
	while(cur!=NULL)
	{
		cout<<cur->data;
		cur = cur->next;
	}
	
}

void print(Node* head)
{
	Node* temp = head;
	while(temp!=NULL)
	{
		cout<<temp->data<<" ";
		temp = temp->next;
	}
}



int main()
{
	Node* head = NULL;
	push(&head,1);
	push(&head,2);
	push(&head,3);
	push(&head,4);
	push(&head,5);
	print(head);
	circular(head);
	Cir_find(head);
	split(head);
	
	
	

}
