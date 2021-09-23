#include<bits/stdc++.h>

using namespace std;

int main(){
	
	string str1("geeks");
	string str2("geeks");
	
	if(str1.compare(str2) == 0)
		cout<<"both strings are same"<<endl;
	else
		cout<<"strings are not same"<<endl;
		
		
		
	str1.clear();
	if(str1.empty()==1)
		cout<<"str1 is empty"<<endl;
	else
		cout<<"not empty"<<endl;
		
		
		
	cout<<"str2 before: "<<str2<<endl;	
	str2.insert(5," for geeks");
	cout<<"str2 after insert(): "<<str2<<endl;
	
	
	
	return 0;
}
