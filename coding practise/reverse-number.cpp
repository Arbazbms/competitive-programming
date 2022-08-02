/*
Time Complexity: O(n), where n is the input number. 

Auxiliary Space: O(1)
*/

#include<bits/stdc++.h>
using namespace std;
int reverseNumber(int num){

    int rev = 0;
    while(num!=0){
        int digit = num % 10;
        rev = (rev * 10) + digit;
        num = num / 10;
    }
    return rev;
}

int main(){
    int num;
    cin>>num;
    int res = reverseNumber(num);
    cout<<"reversed num of "<<num <<" is: "<<res<<endl;

    return 0;
}