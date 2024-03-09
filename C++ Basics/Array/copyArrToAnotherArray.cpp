/*Take 10 integer inputs from user and store them in an array. Now, copy all the elements in another array but in reverse order.*/
#include<iostream>
using namespace std;

int main(){
	int arr[10],n,j;
	int arr2[10];
	cout << "Enter the value of N: \n";
	cin >> n;
	
	for(int i=0; i<n; i++){
		cin >> arr[i];
	}
	j=0;
	for(int i=n-1; i>=0; i--){ //iMpt i=n-1
		arr2[i] = arr[j];
		j++;
	}
		
	cout << "ARRAY2 VALUES: \n";
	for(int i=0; i<n; i++){
		cout << arr2[i] << "\t";
	}
	return 0;
}
