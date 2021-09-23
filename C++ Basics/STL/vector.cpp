// C++ program to illustrate the
// iterators in vector
#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> g1;
    vector<int> g2;

    int n, j;

    for (int i = 0; i < 5; i++)
        g1.push_back(i);

    cout << "Output of begin and end: " << endl;
    for (auto i = g1.begin(); i != g1.end(); ++i)
        cout << *i << " ";

    cout << "Output of rbegin and rend: ";
    for (auto i = g1.rbegin(); i != g1.rend(); ++i)
        cout << *i << " ";

    cout << "VECTOR SIZE: " << g1.size();

    g1.empty() ? cout << "Empty" : cout << "not empty";

    cout << "*************************************************************************************\n";
    cout << "VECTOR 2\n\n";

    cout << "enter n val: \n";
    cin >> n;
    cout << n;
    //insert
    for (int i = 0; i < n; i++)
    {
        cin >> j;
        g2.push_back(j);
    }
    //traverse read
    cout << "\n\nThe vector2 elements are:";
    for (int i = 0; i < g2.size(); i++)
        cout << g2[i] << " ";

    //delete
    g2.pop_back(); // removes last element

    //insert at specic location
    g2.insert(g2.begin(), 45);

    cout << "\n\nThe vector2 elements are:";
    for (int i = 0; i < g2.size(); i++)
        cout << g2[i] << " ";



    cout << "*********************************iterators**************************************************" << endl;
    cout << "Iterators are used to point at the memory addresses of STL containers. They are primarily used in sequence of numbers, characters etc. They reduce the complexity and execution time of program." << endl;
    vector<int> g3;
    vector<int>::iterator ptr;
    g3.assign(5, 10);
    cout << "displaying using iterators\n"
         << endl;
    for (ptr = g3.begin(); ptr < g3.end(); ptr++)
    {
        cout << *ptr << " ";
    }

    return 0;
}
