// include guards 
#include <iostream>
// #include "library.h" 
#include <string>


using namespace std; 

// main function 
int main() 
{ 

// declare variables 
char userInput, gender, protections, living, industry; 
int age; 
double hours, interactions; 
string state, conditions; 

// begin program
cout << "Welcome to our program!" << endl; 

// print menu 
cout << "Below is a menu: \nPlease select your program options from below " << endl; 
cout << "q: quit program \n e: exposure model \ns: severity model \nt: testing model" << endl; 

// user selects choice from the menu
cin >> userInput; 

// converts userInput variable to lowercase to prevent case sensitivity 
tolower(userInput); 

// while loop to execute function 
while (userInput != 'q') 
{
// body of while loop here 
	// series of switch statments 
	switch (userInput) // generate user input from a switch statement 
	{
		case 'e': 
	{
		cout << "You have selected the exposure model" << endl; 
		// call user to enter data w/ error checking included 
		cout << "Please enter your location as a state abbreviation. 
		\nExample: if you live in Massachusetts, use the abbreviation MA" << endl; 
		cin >> state; 

		cout << "Enter the number of hours you spend outside of your home per day" << endl; 
		cin >> hours; 

		cout << "Enter the number of people you interact with daily outside of your family" << endl; 
		cin >> interactions; 

		cout << "Enter the type of interactions you have with others. 
		\na if you wear a mask whenever outside of your home 
		\nx is you maintain a social distance of six feet when outside of your home
		\nu if you have quarantined and do not go outside of your home" << endl; 
		cin >> protections; 

		cout << "Enter your living situation that is most applicable. 
		\np if you live in an apartment
		\nb if you live in a suburban area 
		\nr if you live in a rural area" << endl; 
		cin >> living; 

		// invoke library to deal with exposure model 

		break; 
	}
		case 's': 
	{
		cout << "You have selected the severity model" << endl; 
		// call user to enter data w/ error checking included
		cout << "Enter your age" << endl; 
		cin >> age; 

		cout <<"Enter your gender. 
		\nm for male
		\nf for female " << endl; 
		cin >> gender; 

		cout <<"Enter any underlying medical conditions that you have" << endl; 
		cin >> conditions; 

		// invoke library to deal with severity model 
		break; 
	}

		case 't': 
	{ 
		cout << "You have selected the testing model" << endl; 
		// call user to enter data w/ error checking included
		cout << "Enter your age" << endl; 
		cin >> age; 

		cout << "Do you work in an industry that is at risk for covid-19?
		\nExamples include: healthcare, retail, meatpacking, residential college life, etc.
		\ny for yes, n for no" << endl; 
		cin >> industry; 

		// invoke library to deal with testing model 

	
		break; 
	}

		default: 
	{
		cout << "Error! Invalid character! \nPlease select a valid character..." << endl; 
		// print menu -- possibly make this a function 
		cout << "q: quit program \n e: exposure model \ns: severity model \nt: testing model" << endl; 
	}
	} 

	// generate output by accessing library functions & generated results 



cout << "Please select a program option" << endl; 
cin >> userInput;  // resets program 
}
return 0; // quit program 
} 
