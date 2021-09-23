#include <iostream>
using namespace std;

int main(){
	
string str = "ABC TECH";
cout << str[1]<<endl;
cout << str.find("TECH", 0); 
cout << str.substr(4,7); //(starting string index, ending string index)

	return 0;
}
