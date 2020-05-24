// include guards 
#include <iostream>
// #include "library.h" 
#include <string>
#include <locale>
#include <algorithm>


using namespace std; 

// main function 
int main() 
{ 

// declare variables 
char userInput, gender, protections, living, industry; 
unsigned int interactions, age; 
double hours;  
string state, conditions; 

// begin program
cout << "Welcome to our program!" << endl; 

// print menu 
cout << "Below is a menu: \nPlease select your program options from below " << endl; 
cout << "q: quit program \ne: exposure model \ns: severity model \nt: testing model" << endl; 

// user selects choice from the menu
cin >> userInput; 

// converts userInput variable to lowercase to prevent case sensitivity 
tolower(userInput); 

// while loop to execute function 
while (userInput != 'q') 
{
// body of while loop here 
	// series of switch statments
		// generate user input from a switch statement  
	switch (userInput) 
	{
		case 'e': 
	{
		cout << "You have selected the exposure model" << endl; 
		// call user to enter data w/ error checking included 
		cout << "Please enter your location as a state abbreviation. \nExample: if you live in Massachusetts, use the abbreviation MA" << endl; 
		cin >> state; 
		//error checking, make state string all lowercase 
		transform(state.begin(), state.end(), state.begin(), ::tolower); 

		cout << "Enter the number of hours you spend outside of your home per day" << endl; 
		cin >> hours; 
		// error checking for hours
		while (hours > 24 || hours < 0) 
		{
			cout << "Invalid number: Please enter a number from 0-24 hours" << endl; 
			cin >> hours; 
		}

		cout << "Enter the number of people you interact with daily outside of your family" << endl; 
		cin >> interactions; //unsigned to make negatives positive automatically 

		cout << "Enter the type of interactions you have with others. \na if you wear a mask whenever outside of your home \nx is you maintain a social distance of six feet when outside of your home\nu if you have quarantined and do not go outside of your home" << endl; 
		cin >> protections; 
		// error checking 
		while (protections != 'a' || protections != 'x' || protections != 'u') 
		{
			cout << "Invalid character! Please enter a valid character..." << endl; 
			cin >> protections; 
		}

		cout << "Enter your living situation that is most applicable. \np if you live in an apartment\nb if you live in a suburban area \nr if you live in a rural area" << endl; 
		cin >> living; 
		while (living != 'p' || living != 'b' || living != 'r') 
		{
			cout << "Invalid character! Please enter a valid character..." << endl; 
			cin >> living; 
		}

		// invoke library to deal with exposure model 

		break; 
	}
		case 's': 
	{
		cout << "You have selected the severity model" << endl; 
		// call user to enter data w/ error checking included
		cout << "Enter your age" << endl; 
		cin >> age; 
		while (age < 0) 
		{
			cout << "Error: Invalid Age. Enter a number greater than zero" << endl; 
			cin >> age; 
		}
	

		cout <<"Enter your gender. \nm for male\nf for female " << endl; 
		cin >> gender; 
		tolower(gender); 
		// error checking 
		while (gender != 'm' || gender != 'f') 
		{
			cout << "Invalid character! Enter m for male of f for female" << endl; 
			cin >> gender; 
			tolower(gender); 
		}
    	
    	string condition_list[8] = {"Chronic lung disease", "Asthma", "Heart conditions", "Immune Deficiencies", 
		"Obesity", "Diabetes", "Chronic kidney disease", "Liver disease"};
		for(int i = 0; i < sizeof(condition_list)/ sizeof(condition_list[0]) ; i++){
			cout << condition_list[i] << "\n";
		}
			cout <<"If you have any type of these medical conditions\nPlease type yes or no\n" << endl; 

		while(conditions[0] != 'y' || conditions[0] != 'n'){
			//this error check needs to be fixed. 
			cout << "Please enter yes or no.\n";
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
		// error checking 
		while (age < 0) 
		{
			cout << "Error: Invalid Age. Enter a number greater than zero" << endl; 
			cin >> age; 
		}

		cout << "Do you work in an industry that is at risk for covid-19?\nExamples include: healthcare, retail, meatpacking, residential college life, etc.\ny for yes, n for no" << endl; 
		cin >> industry; 
		tolower(industry); 
		// error checking 
		while (industry != 'y' || industry != 'n') 
		{
			cout << "Invalid character! Enter y for yes or n for no." << endl; 
			cin >> industry; 
			tolower(industry); 
		}

		// invoke library to deal with testing model 

	
		break; 
	}

		default: 
	{
		cout << "Error! Invalid character! \nPlease select a valid character..." << endl; 
		// print menu -- possibly make this a function 
		cout << "q: quit program \ne: exposure model \ns: severity model \nt: testing model" << endl; 
	}
	} 

	// generate output by accessing library functions & generated results 
	switch (userInput)
	{
		case 'e': 
		{
			cout << "Thank you for selecting the exposure model" << endl; 
			cout << "The likelihood of you being exposed to covid-19 is..." << endl; // take results from calculations


			break; 
		}

		case 's': 
		{
			cout << "Thank you for selecting the severity model" << endl; 
			cout << "The likelihood of your case being asymptomatic is..." << endl; // results from calculations
			cout << "The likelihood that your case would be critical or sever is...." << endl; // results from calculations
			
			break; 
		}

		case 't': 
		{
			cout << "Thank you for selecting the testing model" << endl; 
			cout << "You should be tested for covid-19 apprximately ____ times per week" << endl; // results from calculations
			break; 
		}
		default: 
		break; 
	}


cout << "Please select a program option" << endl; 
cin >> userInput;  // resets program 
}
return 0; // quit program 
} 
