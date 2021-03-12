#include <bits/stdc++.h>
using namespace std;

int main()
{

    vector<int> g1;

    for (int i = 1; i <= 5; i++)
    {
        g1.push_back(i);
    }
    int n = g1.size();

    for (int j = 0; j < n; j++)
    {
        cout << g1[j] << "\t";
    }

    cout << "Reverse: " << endl;
    for (int k = n - 1; k >= 0; k--)
        cout << g1[k] << "\t";

    //1 element printing
    cout << " last element: " << g1.back() << endl;
    cout << " first element: " << g1.front() << endl;

    //size
    cout << "Size of the vector: " << g1.size() << endl;
    cout << "n-1: " << g1[n - 1] << endl;
    cout << "n-1: " << g1[n - 2] << endl;
    g1.empty() ? cout << "Empty" : cout << "not empty" << endl;

    //max
    int max = *max_element(g1.begin(), g1.end());
    cout << "max element : " << max << endl;

    return 0;
}
