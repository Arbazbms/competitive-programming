#include <iostream>
#include <vector>
#include <cstdint>
using namespace std;

// Data structure for node of a XOR linked list
struct Node
{
	int data;
	Node* link;
};

// Helper function to return XOR of x and y
Node* XOR(Node *x, Node *y)
{
	return (Node*)((uintptr_t)(x) ^ (uintptr_t)(y));
}

// Helper function to traverse the list in forward direction
void traverse(Node *head)
{
	Node *curr = head;
	Node *prev = nullptr;
	Node *next;

	while (curr != nullptr)
	{
		cout << curr->data << " -> ";

		// next node would be xor of address of previous node
		// and current node link
		next = XOR(prev, curr->link);

		// update prev and curr pointers for next iteration of the loop
		prev = curr;
		curr = next;
	}

	cout << "nullptr";
}

// Helper function to insert a node in the beginning of the XOR linked list
void push(Node* &headRef, int data)
{
	// allocate a new list node and set its data
	Node* newNode = new Node();
	newNode->data = data;

	// The link field of the new node is XOR of current head and nullptr
	// since new node is being inserted at the beginning
	newNode->link = XOR(headRef, nullptr);

	// update link value of current head node if linked list is not empty
	if (headRef)
	{
		// headRef->link is XOR of nullptr and address of the next node
		// To get the address of next node, we XOR it with nullptr
		headRef->link = XOR(newNode, XOR(headRef->link,  nullptr));
	}

	// update the head pointer
	headRef = newNode;
}

int main()
{
	// input keys
	vector<int> keys = { 1, 2, 3, 4, 5 };

	Node *head = nullptr;
	for (int i = keys.size() - 1; i >=0; i--)
		push(head, keys[i]);

	traverse(head);

	return 0;
}
