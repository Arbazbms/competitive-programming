// #include<bits/stdc++.h>
// using namespace std;
// //REVIEW Enhance time complexity
// int main(){

//     string s1 = "mom";
//     string temp;
//     int flag = 1;
//     for(int i=s1.length()-1;i>=0;i--){
//         temp+=s1[i];
//     }
//     if(s1 == temp){
//         cout<<"Palindrome";
//     }
//     else
//         cout<<"Not Palindrome"<<endl;

//         cout << 1/3<<endl;
//     return 0;
// }

//another approach to reverse string
//   int n = str.length();
 
    // Swap character starting from two
    // corners
    // for (int i = 0; i < n / 2; i++)
    // swap(str[i], str[n - i - 1]);



//! BUILT IN
 // Reverse str[begin..end]
    // reverse(str.begin(), str.end());


// o(N) -time
//o(1) - space

// C++ program for the above approach
#include <bits/stdc++.h>
using namespace std;

// Function to check whether string
// is palindrome
string isPalindrome(string S)
{
	// Iterate over the range [0, N/2]
	for (int i = 0; i < S.length() / 2; i++) {

		// If S[i] is not equal to
		// the S[N-i-1]
		if (S[i] != S[S.length() - i - 1]) {
			// Return No
			return "No";
		}
	}
	// Return "Yes"
	return "Yes";
}

// Driver Code
int main()
{
	string S = "MOM";
	cout << isPalindrome(S);

    cout << "3/2= " << 3/2 <<endl; 

	return 0;
}

