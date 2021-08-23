#include<bits/stdc++.h>
using namespace std;
bool areAnagrams(string s1, string s2){
    if(s1.length()!= s2.length())
        return false;
    sort(s1.begin(),s1.end());
    sort(s2.begin(),s2.end());

    for(int i=0;i<s1.length();i++)
        if(s1[i] != s2[i])
            return false;

    return true;
}
int main(){
    string s1,s2;
    cin>>s1>>s2;
        sort(s1.begin(),s1.end());
    sort(s2.begin(),s2.end());

    if('a' == 'A')
        cout << "matched";
    else    
        cout <<"Not Matched";

    cout<<s1<<"\t " << s2<<endl;
    bool res = areAnagrams(s1,s2);
    if(res == true)
        cout<<"Anagrams";
    else   
        cout<<"Not Anagrams";

    return 0;
}