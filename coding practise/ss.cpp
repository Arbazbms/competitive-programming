#include<bits/stdc++.h>
using namespace std;
void printMagicNumber(int N, int A, int B){

    int first =A;
    int sec = B;
    int third;
  
    vector<int> even;
    vector<int> odd;
    if(first%2 == 0)
        even.push_back(first);
    else    
        odd.push_back(first);

    if(sec%2 == 0)
        even.push_back(sec);
    else    
        odd.push_back(sec);

    for(int i=2;i<N;i++){
        third = first + sec;
        if(third%2 == 0)
            even.push_back(third);
        else    
            odd.push_back(third);
        first = sec;
        sec = third;
    }

    for(int i = 0; i<even.size();i++)
        cout << even[i] << " ";

    cout<<endl;

    
     for(int i = 0; i<odd.size();i++)
        cout << odd[i] << " ";
}
int main(){


int A,B,N;
cin>>A>>B;
cin>>N;
printMagicNumber(N,A,B);
return 0;
}