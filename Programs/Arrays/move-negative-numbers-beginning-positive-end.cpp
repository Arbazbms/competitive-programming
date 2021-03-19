#include <bits/stdc++.h>
using namespace std;

int rearrange(int arr[], int n)
{

    int j = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < 0)
        {
            if (i != j)
                swap(arr[i], arr[j]);
            j++;
        }
    }
}

void printArray(int arr[], int n)
{

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << "\t";
    }
}

int main()
{

    int arr[] = {-1, 2, -3, 4, 5, 6, -7, 8, 9};
    int n = sizeof(arr) / sizeof(arr[0]);
    rearrange(arr, n);
    printArray(arr, n);
    return 0;
}

/*
Two Pointer Approach: The idea is to solve this problem with constant space and linear time is by using a two-pointer or two-variable approach where we simply take two variables like left and right which hold the 0 and N-1 indexes. Just need to check that :

Check If the left and right pointer elements are negative then simply increment the left pointer.
Otherwise, if the left element is positive and the right element is negative then simply swap the elements, and Simultaneously increment or decrement the left and right pointers.
Else if the left element is positive and the right element is also positive then simply decrement the right pointer.
Repeat the above 3 steps until the left pointer ≤ right pointer



void shiftall(int arr[], int left, 
              int right)
{
   
  // Loop to iterate over the 
  // array from left to the right
  while (left<=right)
  {
    // Condition to check if the left
    // and the right elements are 
    // negative
    if (arr[left] < 0 && arr[right] < 0)
      left+=1;
     
    // Condition to check if the left 
    // pointer element is positive and 
    // the right pointer element is negative
    else if (arr[left]>0 && arr[right]<0)
    {
      int temp=arr[left];
      arr[left]=arr[right];
      arr[right]=temp;
      left+=1;
      right-=1;
    }
     
    // Condition to check if both the 
    // elements are positive
    else if (arr[left]>0 && arr[right] >0)
      right-=1;
    else{
      left += 1;
      right -= 1;
    }
  }
}
 


*/