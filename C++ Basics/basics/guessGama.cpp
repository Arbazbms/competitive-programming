#include <iostream>
using namespace std;


int main(){
	
	int secretNumber = 7;
	int guess;
	int guessCount=0;
	int guessLimit = 3;
	bool outOfGuesses = false;
	
	while(secretNumber!=guess && !outOfGuesses){
		if(guessCount < guessLimit){
			cout << "Enter Guess: ";
			cin >> guess;		
			guessCount++;
		}else{
			outOfGuesses = true;
		}
	
	}0
	if(outOfGuesses)
		cout << "YOU LOSE\n";
	else
		cout << "YOU WIN";
		 
	return 0;
	
}
