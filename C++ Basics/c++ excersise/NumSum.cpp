/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
// Online C++ compiler to run C++ program online
#include <iostream> 
#include <string> 

using namespace std;

int sumnum(int num){
	string snum = to_string(num);
    cout<<snum<<endl;
    int sum = 0;
	for(int i=0;i<snum.size();i++){
	    cout<<"snum"<<snum.size()<<endl;
	    cout<<snum[i]<<endl;
	    int x = int(snum[i]);
	    cout<<"x"<<x<<endl;
		sum = sum + x;
	}
	return sum;
}

int main(){
	
	int num = 54321;
	cout<<sumnum(num)<<endl;
	return 0;
}
