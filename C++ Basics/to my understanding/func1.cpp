//Parameter Passing to functions
//The parameters passed to function are called actual parameters. For example, in the above program 10 and 20 are actual parameters.
//The parameters received by function are called formal parameters. For example, in the above program x and y are formal parameters.
//There are two most popular ways to pass parameters.

//1.
//Pass by Value: In this parameter passing method, values of actual parameters are copied to function’s 
//formal parameters and the two types of parameters are stored in different memory locations. 
//So any changes made inside functions are not reflected in actual parameters of caller.

//2.
//Pass by Reference Both actual and formal parameters refer to same locations, 
//so any changes made inside the function are actually reflected in actual parameters of calle

// A function that takes two integers as parameters 
// and returns an integer 

  
// A function that takes a int pointer and an int variable as parameters 
// and returns an pointer of type int 
//int *swap(int*,int); 
  
// A function that takes a charas parameters 
// and returns an reference variable 
//char *call(char b); 
  
// A function that takes a char and an int as parameters 
// and returns an integer 
//int fun(char, int); 

#include<iostream>
using namespace std;

int passbyvalue(int x){
	x = 30;
}

int passbyreference(int *x){
	*x=30;
}

int main(){
	
	int x=20;
	passbyvalue(x);
	cout<<"passbyvalue value is: "<<x<<endl;	
	passbyreference(&x);
	cout<<"passbyreference value is : " << x <<endl;
	return 0;
}




