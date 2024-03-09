#include<iostream>
using namespace std;

int main(){
	int a[10],n;
	int largest,smallest;
	cout << "Enter the value of N: \n";
	cin >> n;
	
	for(int i=0; i<n; i++){
		cin >> a[i];
	}
	largest = a[0];
	smallest = a[0];
	cout << "Largest and smallest\n";
	for(int i=0; i<n; i++){
		
		if(a[i] > largest)
			largest = a[i];
		if(a[i] < smallest)
			smallest = a[i];
	}
	
	cout << "Largest: " << largest << "  smallest: " << smallest <<endl;
	return 0;
}
