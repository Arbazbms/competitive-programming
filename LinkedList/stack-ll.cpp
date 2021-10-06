#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(int val){
        data = val;
        next = NULL;
    }
};

void push(Node* &top, int item){
    Node* p = new Node(item);
    if(top == NULL){
        top = p;
        return;
    }
    p->next = top;
    top=p;
        
}

int pop(Node* &top){
    if(top == NULL){
        cout<<"stack underflow!"<<endl;
        return -1;
    }
    Node* temp = top;
    top = top->next;
    int ele = temp->data;
    delete temp;
    return ele;

}

void display(Node* top){
    if(top==NULL){
        cout<<"No elements in stack!"<<endl;
        return;
    }
    while(top!=NULL){
        cout<< top->data<<" ";
        top = top->next;
    }
}

void peek(Node* &top)
{
    if(top == NULL)
    {
        cout << "Empty Stack.!" << endl;
        return ;
    }
    cout << top->data << endl;
}

int main(){

    Node* top = NULL;
    push(top,1);
    push(top,2);
    push(top,3);
    display(top);
    display(top);

    // peek(top);
    // cout << endl<< pop(top)<<endl;
    // display(top);

    return 0;
}