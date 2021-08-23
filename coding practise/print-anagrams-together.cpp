// NOTE C++ program for finding all anagram
// pairs in the given array
/*
Input: array = {“cat”, “dog”, “tac”, “god”, “act”,"abc"}
output: cat tac act, 
        dog god
        abc
Explanation: cat tac and act are anagrams 
and dog and god are anagrams as 
they have the same set of characters.

Input: array = {“abc”, “def”, “ghi”}
output: abc, def, ghi
Explanation: There are no anagrams in the array.
*/
#include<bits/stdc++.h>
using namespace std;
void printAnagrams(unordered_map<string,vector<string>> map){
    for(auto it: map){
        vector<string> vect = it.second;
        for(int i=0;i<vect.size();i++){
            cout<<vect[i]<<"\t";
        }
        cout<<endl;
    }
}
void storeInMap(vector<string> vect){

    unordered_map<string,vector<string>> map;
    for(int i=0;i<vect.size();i++){
        string tempString = vect[i];
        sort(tempString.begin(), tempString.end());
        map[tempString].push_back(vect[i]);
    }
    printAnagrams(map);

}
// cat
// map["act"] --> ["act","cat"]
// map["aabrz"] -- > ["arbaz"]

int main(){

    vector<string> arr;
    arr.push_back("act");
    arr.push_back("cat");
    arr.push_back("tac");
    arr.push_back("arbaz");
    arr.push_back("zabra");

    storeInMap(arr);
    return 0;
}