#include<bits/stdc++.h>
using namespace std;
void isMultiple(int num){

    int sum=0;
    while(num!=0){
        sum += num%10;
        num = num/10;
    }
    if(sum%3==0)
        cout<<"multiple";
    else    
        cout<<"Not Multiple";
}
int main(){
    int num;
    cin>>num;
    isMultiple(num);
    return 0;
}