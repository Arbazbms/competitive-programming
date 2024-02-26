// #include <iostream>
// using namespace std;


// int main(){
	
// 	int secretNumber = 11;
// 	int guess;
// 	int guessCount=0;
// 	int guessLimit = 3;
// 	bool outOfGuesses = false;
// 	string name;
// 	cout << "Enter your Name" << endl;
// 	cin >> name;
// 	cout << "Guess Number from 0 - 15" << endl;
// 	while(secretNumber!=guess && !outOfGuesses){
// 		if(guessCount < guessLimit){
// 			cout << "Enter Guess: ";
// 			cin >> guess;		
// 			guessCount++;
// 		}else{
// 			outOfGuesses = true;
// 		}
	
// 	}
// 	if(outOfGuesses)
// 		cout << "YOU LOSE" << name << endl;
// 	else
// 		cout << "YOU WIN"<< name << endl;
		 
// 	return 0;
	
// }


#include<bits/stdc++.h>
using namespace std;

int main(){
	int secretNumber = 7;
	int guessNumber;
	bool win = false;
	int count = 0;
	for(int i=0; i<3; i++){
		cin >> guessNumber;
		if(guessNumber == secretNumber){
			win = true;
			break;
		}
		else{
			win = false;
		}
	}
	if(win){
		cout << "YOU WIN";
	}else	
		cout << "YOU LOOSE";
	
}

