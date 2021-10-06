#include<bits/stdc++.h>
using namespace std;

class Node
{
    public:
    int data;
    Node* next;

    Node(int val)
    {
        data = val;
        next = NULL;
    }
};

void push(Node* &top, int item)
{
    Node* ele = new Node(item);

    if(top == NULL)
    {
        top = ele;
        return ;
    }
    ele->next = top;
    top = ele;
}

int pop(Node* &top)
{
    if(top == NULL)
    {
        cout << "Stack Underflow.!";
        return -1;
    }
    Node* ele = top;
    top = top->next;
    int data = ele->data;
    delete ele;
    return data;
}

void peek(Node* top)
{
    if(top == NULL)
    {
        cout << "Empty Stack.!" << endl;
        return ;
    }
    cout << top->data << endl;
}

void display(Node* top)
{
    if(top == NULL)
        return ;
    cout << top->data << endl;
    display(top->next);
}

int main()
{
    // #ifndef ONLINE_JUDGE
    //     freopen("input.txt","r",stdin);
    //     freopen("output.txt","w",stdout);
    // #endif

    Node* top = NULL;

    peek(top);                                          // Empty Stack.!
    cout << pop(top) << endl;                           // Stack Underflow.!-1
    push(top, 10);
    push(top, 20);
    push(top, 30);
    push(top, 40);
    display(top);                                       // 40
                                                        // 30
                                                        // 20
                                                        // 10
    cout << endl << pop(top) << endl;                   // 40
    peek(top);                                          // 30
    cout << "\n";
    display(top);                                       // 30
                                                        // 20
                                                        // 10

    return 0;
}