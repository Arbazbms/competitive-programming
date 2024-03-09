/*Take an array of 10 elements. Split it into middle and store the elements in two dfferent arrays. E.g.-
INITIAL array :
58	24	13	15	63	9	8	81	1	78

After spliting :
58	24	13	15	63
9	8	81	1	78
*/

#include <iostream>
using namespace std;

int main(){
	
	int arr[10] = {1,2,3,4,5,6};
	int arr1[10];
	int arr2[10];
	int n = 6;
	
	//arr1 <-- arr
	cout << "ARR1" <<endl;
	for(int i=0; i<n/2; i++){
		arr1[i] = arr[i];
	    cout << arr1[i]<<"\t";
	}
	
	cout <<""<<endl;
	//arr2 <-- arr
	cout << "ARR2"<<endl;
	for(int i=n/2; i<n; i++){
		arr2[i] = arr[i];
		cout << arr2[i]<<"\t";
	}	
	return 0;
}

