// include guards 
#include <iostream>
#include "library.h" 

using namespace std; 

// main function 
int main() 
{ 

// declare variables 
char userInput

// begin program
cout << "Welcome to our program!" << endl; 

// print menu 
cout << "Below is a menu: \nPlease select your program options from below " << endl; 
cout << "q: quit program \n e: exposure model \ns: severity model \nt: testing model" << endl; 

// user selects choice from the menu
cin >> userInput >> endl; 

// converts userInput variable to lowercase to prevent case sensitivity 
tolower(userInput); 

// while loop to execute function 
while (userInput != 'q') 
{
// body of while loop here 
	// series of switch statments 
	case e: 
	{
		cout << "You have selected the exposure model" << endl; 
	}

	case s: 
	{
		cout << "You have selected the severity model" << endl; 
	}

	case t: 
	{ 
		cout << "You have selected the testing model" << endl; 
	}

	default: 
	{
		cout << "Error! Invalid character! \nPlease select a valid character..." << endl; 
		// print menu -- possibly make this a function 
		cout << "q: quit program \n e: exposure model \ns: severity model \nt: testing model" << endl; 
	}
cout << "Please select a program option" << endl; 
cin >> userInput >> endl; // resets program 
}
return 0; // quit program 
} 
