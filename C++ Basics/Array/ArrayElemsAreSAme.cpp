#include<iostream>
#include <unordered_map>
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
bool isSameUsingHashMap(int arr[], int n){
	unordered_map<int, int> map;

	for (int i=0; i<n; i++){
		map[arr[i]] ++;
	}
	if(map.size() == 1)
		return true;
	return false;
}
int main(){
	//4 3
	// 2 3 4 5
	// 0 1 2 3
	int arr[10],n;
	cout << "Enter the value of N: \n";
	cin >> n;
	
	for(int i=0; i<n; i++){
		cin >> arr[i];
	}
	//bool res = isSameUsingHashMap(arr,n);
	bool res = isSame(arr,n);
	if(res){
		cout <<"ARRAY ELEMS ARE SAME\n";
	}else{
			cout <<"ARRAY ELEMS ARE NOT SAME\n";
	}
	return 0;
}
