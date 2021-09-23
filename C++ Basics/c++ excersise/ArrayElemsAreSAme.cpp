#include<iostream>
using namespace std;

bool isSame(int arr[], int n){
	bool flag = 0;
	
	for(int i=0; i<n; i++){
		if(arr[i] != arr[i+1])
			flag=1;
	}	
	return flag;
}
int main(){
	int arr[10],n;
	cout << "Enter the value of N: \n";
	cin >> n;
	
	for(int i=0; i<n; i++){
		cin >> arr[i];
	}
	int res = isSame(arr,n);
	if(res == 0){
		cout <<"ARRAY ELEMS ARE SAME\n";
	}else{
			cout <<"ARRAY ELEMS ARE NOT SAME\n";
	}
	return 0;
}
