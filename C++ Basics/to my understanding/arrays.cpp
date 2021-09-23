//1.
//Array declaration by specifying size
// Array declaration by specifying size
//int arr1[10];

// With recent C/C++ versions, we can also
// declare an array of user specified size
//int n = 10;
//int arr2[n];

//2
// Array declaration by initializing elements
//int arr[] = { 10, 20, 30, 40 }

// Compiler creates an array of size 4.
// above is same as "int arr[4] = {10, 20, 30, 40}"

//3
//Array declaration by specifying size and initializing elements
// Array declaration by specifying size and initializing
// elements
//int arr[6] = { 10, 20, 30, 40 }

// Compiler creates an array of size 6, initializes first
// 4 elements as specified by user and rest two elements as 0.
// above is same as "int arr[] = {10, 20, 30, 40, 0, 0}"

#include <bits/stdc++.h>
using namespace std;
int main()
{

	int arr[] = {1, 2, 3, 4};
	int arrSize = sizeof(arr) / sizeof(arr[0]);
	int n1 = sizeof(arr);
	cout << n1;
	int n2 = sizeof(arr[0]);
	cout << n2;
	for (int i = 0; i < arrSize; i++)
	{
		cout << arr[i] << "\t";
	}

	cout<<"\n";
	for (int i = 0; i < arrSize; i++)
	{
		cout << "Address arr[" << i << "] is " << &arr[i] << "\n"; 
	}
		
	return 0;
}
