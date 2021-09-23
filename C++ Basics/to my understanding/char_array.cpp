#include<iostream>
#include<string>
using namespace std;

int main(){
	
	char str[] = "geeks";
	char str1[] = {'a','b','c','d'};
	cout<<str<<endl;
	cout<<"size of char array"<<sizeof(str)<<endl;
	cout<<str[0]<<endl;
	cout<<sizeof(str)/sizeof(str[0])<<endl;
	
	cout<<"size of char array str1  "<<sizeof(str1)<<endl;
	cout<<sizeof(str1)/sizeof(str1[0])<<endl;
	
	cout<<"char array traversal"<<endl;
	for(int i=0; i<sizeof(str); i++){
		if(str[i]=='e')
			continue;
		cout<<str[i]<<"\n";
	}
	cout<<&str1;
	return 0;
}
