/* Reversing An Array Element */
#include <bits/stdc++.h>
using namespace std;
reverseArray(int a[], int start, int end){
	while(start < end){
		swap(a[start], a[end]);
		start++;
		end--;
	}
}
int main(){
	int arr[]={1,2,3,4,5,6,7,8,9,10};
	int n = sizeof(arr)/sizeof(arr[0]);
	reverseArray(arr,0,n-1);
	cout<<"REVERSED ARRAY IS: \n";
	for(int i=0; i<n; i++){
		printf("%d\t", arr[i]);
	}
	return 0;
}
