/*
Take 20 integer inputs from user and print the following:
number of positive numbers
number of negative numbers
number of odd numbers
number of even numbers
number of 0.

*/
#include<iostream>
using namespace std;

int main(){
	int arr[10],n;
	int pos=0,neg=0,odd=0,even=0,zero=0;
	cout << "Enter the value of N: \n";
	cin >> n;
	
	for(int i=0; i<n; i++){
		cin >> arr[i];
			
			
						
		if(arr[i]>0)
            pos++;
        else if(arr[i]<0)
            neg++;
        else
            zero++;
            
        if(arr[i]%2==0)
            even++;
        else
            odd++;
	/*	
		Mistrake logical error	
	if(arr[i]>0)
			pos++;
		else if(arr[i]<0)
			neg++;
		else if(arr[i] == 0)
			zero++;
		else if(arr[i]%2==0)
			even++;
		else
			odd++;*/
	}
	
	cout <<"Positive: "<< pos<<"Negative "<< neg << "Zero: " << zero << "Even: " << even << "Odd: " << odd <<endl;

	return 0;
}
