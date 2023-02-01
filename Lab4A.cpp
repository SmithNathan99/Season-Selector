/* Author:      Nathan Smith (NathanSmith11@my.unt.edu) 
   Date: 	February 16, 2022
   Instructor: 	Dr. Pradhumna Shrestha
   Description: This program will receive a user's input from the selection of seasons and it will output a corresponding statement.
 */ 
#include <iostream>

using namespace std;
int main() 
{
	char userInput; 
	
	cout << "Using the choices of S for summer, F for fall, W for winter, or G for spring. What is your choise of Season?: " << endl;
	cin >> userInput;
	
	//this uppercases any of the of the user's input
	userInput = toupper(userInput);

	//declaration of enumeration of the choices
	enum seasons {Summer = 'S', Fall = 'F', Winter = 'W', Spring = 'G'};
	
	//output statements of the switches
	switch(userInput) {
		
	//	case 's':
		case 'S':
			cout << "It is rather hot outside." << endl;
			break;

		case 'F':
	//	case 'f':
			cout << "The weather looks good" << endl;
			break;

		case 'W':
	//	case 'w':
			cout << "It is rather cold outside." << endl;
			break;

		case 'G':
	//	case 'g':
			cout << "The flowers are booming." << endl;
			break;

		default:
			cout << "Wrong choice." << endl;
			break;
	}


	return 0;

}
