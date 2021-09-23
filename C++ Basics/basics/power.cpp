#include <iostream>
#include <cmath>
using namespace std;

int power(int baseNum, int powNum){
	int res = 1;
	for(int i=0; i<powNum; i++){
		res = res * baseNum;
	}
	return res;
}

int main(){
	
	cout << power(2,3);	
    
	return 0;
}
