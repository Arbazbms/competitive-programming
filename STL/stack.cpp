/*
The functions associated with stack are: 
empty() – Returns whether the stack is empty – Time Complexity (T/F): O(1) 
size() – Returns the size of the stack – Time Complexity : O(1) 
top() – Returns a reference to the top most element of the stack – Time Complexity : O(1) 
push(g) – Adds the element ‘g’ at the top of the stack – Time Complexity : O(1) 
pop() – Deletes the top most element of the stack – Time Complexity : O(1) 
*/
#include <bits/stdc++.h>
using namespace std;

int main()
{

    stack<int> s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);

    while (!s.empty())
    {
        cout << s.top() << " ";
        s.pop();
    }

    return 0;
}