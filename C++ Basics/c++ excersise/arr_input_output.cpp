#include<iostream>
using namespace std;

int main(){
	int arr[10],n;
	cout << "Enter the value of N: \n";
	cin >> n;
	
	for(int i=0; i<n; i++){
		cin >> arr[i];
	}
	cout << "Entered array VAlues are: \n";
	for(int i=0; i<n; i++){
		cout << arr[i] << "\t";
	}
	return 0;
}
