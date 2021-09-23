#include <iostream>
#include <cmath>
using namespace std;

void sayHi(string name, int age){
	cout << "Hello "<< name << " u are " <<age << " years old";
}

double cube(double num){
		return num*num*num;
 
}

int main(){
	
	sayHi("Arbaz", 21);    
	cout << "\n" << cube(3);
	return 0;
	
}
