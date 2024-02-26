/*
 Maps are associative containers that store elements in a mapped fashion.
 Each element has a key value and a mapped value.
 No two mapped values can have same key values.
 */

#include <bits/stdc++.h>
using namespace std;

int main()
{

    map<int, int> m;
    m.insert(pair<int, int>(1, 6));
    m.insert(pair<int, int>(2, 7));
    m.insert(pair<int, int>(3, 8));

    map<int, int>::iterator itr;
    cout << "elements of map1 are: " << endl;
    for (itr = m.begin(); itr != m.end(); itr++)
    {
        cout << itr->first << "-" << itr->second << endl;
    }

    //second map
    //!assigning the element of m to m2
    map<int, int> m2(m.begin(), m.end());

    //erase(key)
    m2.erase(1);

    // insert key 88 = value 99
    m2[88] = 99;

    cout << "elements of map2 are: " << endl;
    for (itr = m2.begin(); itr != m2.end(); itr++)
    {
        cout << itr->first << "-" << itr->second << endl;
        cout << typeid(itr->first).name() << endl;
    }


    //size
    cout << "size of map2 is: " << m2.size() << endl;

    //clears all element
    m2.clear();

    //empty
    m2.empty() ? cout << "map2 is empty " : cout << "Map2 is not empty ";

    return 0;
}