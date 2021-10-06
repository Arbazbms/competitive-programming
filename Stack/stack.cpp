/*  Below program is written in C++ language  */

#include<iostream>

using namespace std;

class Stack
{
    public:
    int top;
    int a[10];  //Maximum size of Stack
    Stack()
    {
        top = -1;
    }
    
    // declaring all the function
    void push(int x);
    int pop();
    void isEmpty();
    void display();
};

// function to insert data into stack
void Stack::push(int x)
{
    if(top >= 10)
    {
        cout << "Stack Overflow \n";
    }
    else
    {
        a[++top] = x;
        cout << "Element Inserted \n";
    }
}

// function to remove data from the top of the stack
int Stack::pop()
{
    if(top < 0)
    {
        cout << "Stack Underflow \n";
        return 0;
    }
    else
    {
        int d = a[top--];
        return d;
    }
}

// function to check if stack is empty
void Stack::isEmpty()
{
    if(top < 0)
    {
        cout << "Stack is empty \n";
    }
    else
    {
        cout << "Stack is not empty \n";
    }
}

void Stack::display(){
    if(top < 0){
        cout << "Stack is Empty!\n";
        return;
    }
    while(top!=-1){
        cout << a[top]<<" ";
        top--;
    }
}

// main function
int main() {

    Stack s1;
    s1.push(10);
    s1.push(100);
    s1.display();
    /*
        preform whatever operation you want on the stack
    */
}