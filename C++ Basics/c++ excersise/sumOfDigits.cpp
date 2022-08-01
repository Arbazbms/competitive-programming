/*
Time Complexity : O(logn)

Auxiliary Space: O(1)
*/

#include<bits/stdc++.h>
using namespace std;

int sumOfDigit(int num){

    int sum = 0;
    while(num!=0){
        sum += num % 10;
        num /=10;
    }
    return sum;

}

int main(){

    int num = 12345;
    cout << "SUM OF DIGIT : " << sumOfDigit(num);

    return 0;
}