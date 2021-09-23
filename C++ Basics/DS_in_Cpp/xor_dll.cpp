/*Memory efficient Doubly Linked List */
#include <bits/stdc++.h> 
#include <inttypes.h> 
using namespace std; 

class Node 
{ 
	public: 
	int data; 
	Node* npx; 
}; 

Node* XOR (Node *a, Node *b) 
{ 
	return (Node*) ((uintptr_t) (a) ^ (uintptr_t) (b)); 
} 

void insert(Node **head_ref, int data) 
{ 
	Node *new_node = new Node(); 
	new_node->data = data; 

	new_node->npx = *head_ref; 

	if (*head_ref != NULL) 
	{ 

		(*head_ref)->npx = XOR(new_node, (*head_ref)->npx); 
	} 


	*head_ref = new_node; 
} 


Node* insertEnd(Node **head, int val) {
  Node* prev = NULL, *curr = *head, *next = XOR(prev, curr->npx);
  while (next) {
    prev = curr;
    curr = next;
    next = XOR(prev, curr->npx);
  }
  next = new Node();
  next->npx = XOR(curr, NULL);
  curr->npx = XOR(curr->npx, next);
 
}


void printList (Node *head) 
{ 
	Node *curr = head; 
	Node *prev = NULL; 
	Node *next; 

	cout << "Linked list Elements:\n"; 

	while (curr != NULL) 
	{ 
		cout<<curr->data<<" "; 
		next = XOR (prev, curr->npx); 

		prev = curr; 
		curr = next; 
	} 
} 

int main () 
{ 

	Node *head = NULL;
	int ele,choice;
	 while(1){
	
		cout<<endl;
        cout<< "1. insert from Front" <<endl;
        cout<< "1. insert from End" <<endl;
        cout<< "2. Display" <<endl;
		cout<< "3. Exit " <<endl;
        cout<< "Enter Choice" <<endl;
        cin>>choice;
        
        switch (choice) {
            case 1: cout<<"Enter element to insert from Front"<<endl;
                    cin>>ele;
                    insert(&head,ele);
                    break;
                    
            case 2: cout<<"Enter element to insert from End"<<endl;
                    cin>>ele;
                    insertEnd(&head,ele);
                    break;
                      
            case 3: printList(head);
                    break;

		    case 4: exit(0);
                    break;

            default: cout<<"Invalid Choice"<<endl;
        }
        
        
    }
	
	
	return (0); 
} 


