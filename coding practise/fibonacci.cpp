#include<bits/stdc++.h>
using namespace std;

int main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif

    int n;
    cin>>n;
    int first = 0;
    int sec = 1;
    int third;
    cout<<first<<" "<<sec<<" ";
    for(int i=2;i<n;i++){
        third = first + sec;
        cout<<third<<" ";
        first = sec;
        sec = third;
    }
    return 0;
}
// 0 1 1 2 3 5 8