#include <iostream>
#include <cmath>
using namespace std;

int main(){
	
	int n1,n2,res;
	char op;
	cout << "Calculator\n";
	cout << "Enter number1 \n";
	cin >> n1;

	cout << "Enter number2 \n";
	cin >> n2;	
	
	cout << "Enter operator\n";
	cin >> op;
	

	switch(op){
		
		case '+':
				cout << "Result is : " << n1 + n2 ; 
				break;
		case '-':
				cout << "Result is : " << n1 - n2 ; 
				break;
				
		default:
				cout << "operator not valid \n";
				break;
					
	}
    
	return 0;
}
