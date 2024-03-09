// C++ program to count maximum consecutive 
// 1's in a binary array. 
#include<bits/stdc++.h> 
using namespace std; 
  
// Returns count of maximum consecutive 1's 
// in binary array arr[0..n-1] 
int getMaxLength(bool arr[], int n) 
{ 
    int count = 0; //intitialize count 
    int result = 0; //initialize max 
  
    for (int i = 0; i < n; i++) 
    { 
        
        
        // If 1 is found, increment count 
        // and update result if count becomes 
        // more. 
        if (arr[i] == 1) {
            count++;//increase count 
            result = max(result, count); 
        }
           
        // Reset count when 0 is found 
        else
        { 
            count = 0;
        } 
    } 
  
    return result; 
} 
  
// Driver code 
int main() 
{ 
    bool arr[] = {1,0,1,1,0,0,0,1,1,0,1,0,1,1,1}; 
    int n = sizeof(arr)/sizeof(arr[0]); 
    cout << getMaxLength(arr, n) << endl; 
    return 0; 
}