// C++ program to demonstrate working of find(), 
// rfind(),find_first_of() and find_last_of() 
#include<iostream> 
#include<string> 
using namespace std; 
int main() 
{ 
	string str("The Geeks for Geeks"); 

	// find() returns position to first 
	// occurrence of substring "Geeks" 
	// Prints 4 
	cout << "First occurrence of \"Geeks\" starts from : "; 
	cout << str.find("Geeks") << endl; 

	// Prints position of first occurrence of 
	// any character of "reef" (Prints 2) 
	cout << "First occurrence of character from \"reef\" is at : "; 
	cout << str.find_first_of("reef") << endl; 

	// Prints position of last occurrence of 
	// any character of "reef" (Prints 16) 
	cout << "Last occurrence of character from \"reef\" is at : "; 
	cout << str.find_last_of("reef") << endl; 

	// rfind() returns position to last 
	// occurrence of substring "Geeks" 
	// Prints 14 
	cout << "Last occurrence of \"Geeks\" starts from : "; 
	cout << str.rfind("Geeks") << endl; 

	return 0; 

} 

