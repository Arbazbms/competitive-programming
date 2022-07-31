#include<iostream>
using namespace std;

bool isSame(int arr[], int n){
	bool same = true;
	
	for(int i=0; i<n-1; i++){
		if(arr[i] != arr[i+1]){
			same = false;
			cout<<arr[i+1]<<endl;
			break;
		}
	}	
	return same;
}
int main(){
	int arr[10],n;
	cout << "Enter the value of N: \n";
	cin >> n;
	
	for(int i=0; i<n; i++){
		cin >> arr[i];
	}
	bool res = isSame(arr,n);
	if(res){
		cout <<"ARRAY ELEMS ARE SAME\n";
	}else{
			cout <<"ARRAY ELEMS ARE NOT SAME\n";
	}
	return 0;
}
