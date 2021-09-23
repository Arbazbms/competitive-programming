#include <iostream>
#include <cmath>
using namespace std;


int main(){
	
	int age = 20;
	int *pAge = &age;
	
	double gpa = 8.52;
	double *pGpa = &gpa;
	
	string name="Arbaz";
	string *pName = &name;
	
	cout << pAge <<endl; // printing age pointer mem address
	cout << *pAge; // printing value : --> deReferencing pointer
	cout<< *&age<<endl; //this also prints age 
		
	/*
		Computer Access the value based on the physical memory address
		we access the value by variable Name
	*/
	
	// Printing age variable Memory Address
	cout << "Age: "<< &age<<endl; 
	cout << "gpa: "<< &gpa<<endl; 
	cout << "name: "<< &name<<endl; 
	
	return 0;
}
