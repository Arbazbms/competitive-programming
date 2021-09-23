#include<bits/stdc++.h>

using namespace std;

//function that return number after .
//example-> 88.5321 ->output --> 5321
string floatpointnumber(string num){
	int pos = num.find(".");
	cout<<pos<<endl;
	if(pos == string::npos)
		return "";
	else
		return num.substr(pos+1);
	
}

bool checkstring(string str){
	
	for(int i=0;i<str.length();i++){
		if(str[i]<'0' || str[i]>'9'){
			return false;
		}
	}
	return true;
}

string replaceBlankWith20(string str) 
{ 
    string replaceby = "%20"; 
    int n = 0; 
  
    // loop till all space are replaced 
    while ((n = str.find(" ", n)) != string::npos ) 
    { 
        str.replace(n, 1, replaceby); 
        n += replaceby.length(); 
    } 
    return str; 
} 
int main(){
	
	
	string floatnumber = "85.5632";
	string res = floatpointnumber(floatnumber);
	cout<<res<<endl;
	
	string str="123456";
	cout<<checkstring(str)<<endl;//prints 1 if digits else 0
	
	string urlex = "google com in"; 
    cout << replaceBlankWith20(urlex) << endl; 
	
	return 0;
}


