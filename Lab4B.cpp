/* Author:      Nathan Smith (NathanSmith11@my.unt.edu) 
   Date: 	February 16, 2022
   Instructor: 	Dr. Pradhumna Shrestha
   Description: This program will determine if the substring received from the user is anywhere in location with the main text
 */ 
#include <iostream>
#include <string>
#include <stdio.h>

using namespace std;
int main()
{
	string text = "Welcome to CSCE 1030 lab. We will search inside C++ strings.";

	string subst;
	
	printf("Welcome to CSCE 1030 lab. We will search inside C++ strings.\n");
	printf("Type in a sub-string from the large text above.\n");
	
	//receiving user's string
	getline(cin, subst);
	
	//indicates where the substring is located
	int loc = text.find(subst, 0);
	
	//if-else of whether or not the substring is located inside the main text
	if(loc != string::npos) {
		printf("The location of the string is: %i \n", loc);
	}

	else {
		printf("Substring not found in the sentence.");
	}



	return 0;
}
