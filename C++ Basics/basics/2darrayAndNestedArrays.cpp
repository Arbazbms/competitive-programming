#include <iostream>
#include <cmath>
using namespace std;


int main(){
	
	//[row][col]
	int numberGrid[3][2] = {
							{1,2}
							{3,4}
							{5,6}	
						 }
 
 cout << numberGrid[0][1];
    
for(int i=0; i<3; i++){//rows
	for(int j=0; j<2; j++){//cols 
		cout << numberGrid[i][j];
	}
	cout << endl;
}
	return 0;
}
