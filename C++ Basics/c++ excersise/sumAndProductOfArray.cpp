#include<iostream>
using namespace std;

int main(){
	int arr[10],n;
	int sum=0, product=1;
	cout << "Enter the value of N: \n";
	cin >> n;
	
	for(int i=0; i<n; i++){
		cin >> arr[i];
	}
	cout << "SUM AND PRODUCT OF ARRAY: \n";
	for(int i=0; i<n; i++){
		sum = sum + arr[i];
		product = product * arr[i];
	}
	cout <<"SUM: " << sum << " Product: " << product <<endl;
	return 0;
}
