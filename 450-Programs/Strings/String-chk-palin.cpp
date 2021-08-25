/*
https://practice.geeksforgeeks.org/problems/palindrome-string0817/1

Example 1:

Input: S = "abba"
Output: 1
Explanation: S is a palindrome
Example 2:

Input: S = "abc" 
Output: 0
Explanation: S is not a palindrome

*/
int isPlaindrome(char S[])
{
    // Your code goes here
    int start = 0;
    int end = strlen(S) - 1;
    while (start < end)
    {
        if (S[start] != S[end])
            return 0;

        start++;
        end--;
    }
    return 1;
}