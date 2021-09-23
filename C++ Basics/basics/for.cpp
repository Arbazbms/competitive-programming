#include <iostream>
#include <cmath>
using namespace std;

int main(){
	
	int arr[50];
	int n;
	cout << "Enter the value of  n \n";
	cin >> n;
	
	cout << "Enter " << n << " Values";
	for(int i=0;i<n;i++){
		cin >> arr[i];
	}

	cout << "Array values are";
	for(int i=0;i<n;i++){
		cout << arr[i];
	}	
	
    
	return 0;
}
