#include <bits/stdc++.h>
using namespace std;
int main()
{

    vector<vector<int>> vect1 =
        {
            {1, 2},
            {3, 4},
            {5, 6},
        };

    vector<vector<int>> vect2;
    int r, c;

    for (int i = 0; i < vect1.size(); i++)
    {
        for (int j = 0; j < vect1[0].size(); j++)
        {
            cout << vect1[i][j] << " ";
        }
        cout << endl;
    }

    cout << "*************input******************************" << endl;
    cout << "enter no of rows" << endl;
    cin >> r;
    cout << "enter no of cols" << endl;
    cin >> c;

    //input not working
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cout << "ddddd" << endl;
        }
    }

    //output
    for (int i = 0; i < vect2.size(); i++)
    {
        for (int j = 0; j < vect2[0].size(); j++)
        {
            cout << vect2[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}