#include <iostream>
#include <cmath>
using namespace std;

class Book {
	public: 
		string title;
		string author;
		int pages;
		/*Book(){
			cout << "Creating Object \n";
		}*/
		Book(string aTitle, string aAuthor, int aPages){
			 title = aTitle; // 2 constructor 1->default 2->parameterized
			 author = aAuthor;
			 pages = aPages;
		}
};

/*
class is a datatype or a blueprint for a datatype
object is instance of a class
constructor is basically a special function that is executed whenever a object is created
*/
int main(){
	
	string name = "Arbaz";
	double pi = 3.14;
	char favoriteLetter = 'G';
		
/*	Book book1;
	book1.title = "harry potter";
	book1.author = "Arbaz";
	book1.pages=50;                      without constructors

	Book book2;
	book2.title = "money heist";
	book2.author = "saif";
	book2.pages=500;
	cout << book1.pages;
	
	*/

		
		/*WITH CONSTRUCTOR*/
		Book book1("Harry potter", "Arbaz Ahmed", 500);
		Book book2("Harry ", "saif Ahmed", 600);
		
		cout << book1.author;
	
	//! watch feecodecamp c++ tutorials
	return 0;
}
