#include <iostream>
#include <cmath>
using namespace std;

int main(){
	
	int age;
	string name;
	
   	cout << "Enter ur Age: ";
	cin >> age;
	
	
	cout << "Enter ur name: \n";
	getline(cin, name);
	cout << "Hello " << name; 
	cout << "You are " << age << " Years Old";
	
    
	return 0;
}
