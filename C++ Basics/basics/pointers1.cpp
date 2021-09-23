#include <iostream>

using namespace std;

int main()
{
    int arr[3] = {1, 2, 3};

    cout << arr << endl;
    cout << &arr[0];
}

/*
An array name contains the address of first element of the array which acts like constant pointer. It means, the address stored in array name can’t be changed.
For example, if we have an array named val then val and &val[0] can be used interchangeably.
*/

/*
output
0x22fe40
0x22fe40
*/
// both are same
// link https://www.geeksforgeeks.org/pointers-c-examples/?ref=lbp