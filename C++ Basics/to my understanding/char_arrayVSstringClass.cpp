// C++ program to demonstrate Character Array 
// and String 
//
//String vs Character Array
//In C++, in addition to character array, there exist a similar kind of way to implement,
//that is using string class which is a part of C++ standard library. To implement string 
//using string class, we need to add header file . Basic difference between character array
//and a string is, in case of character array, the size has to be alloted at the time of declaration,
//i.e all memory once allocated is fixed and cannot be altered at run time. Whereas, for string,
//there is no need to specify the size and to allocate fixed memory at the time of declaration.

#include<iostream> 
#include<string>// for string class 
using namespace std; 
int main() 
{ 
	// Size has to be predefined in character array 
	char str[80] = "GeeksforGeeks"; 

	// Size not predefined in string 
	string s("GeeksforGeeks"); 

	// Printing character array and string 
	cout << str << endl; 
	cout << s << endl; 

	return 0; 
} 

