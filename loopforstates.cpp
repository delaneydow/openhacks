//Im literally a brick for making this

#include <iostream>
#include <string>
#include <ctype.h>
#include <stdio.h>

using namespace std;
int main()
{
    int count = 0;
    char *userInput;
    char state[50] = {'AL', 'AK', 'AZ', 'CA', 'CO', 'CT', 'DE', 'FL', 'GA', 'HI', 'ID', 'IL', 'IN' ,'IA', 'KS', 'KY', 'MA', 'ME', 'MD', 'MI', 'MN', 'MS', 'MO', 'MT' , 'NE', 'NV', 'NH' , 'NJ', 'NM', 'NY', 'NC', 'ND', 'OH', 'OK', 'OR', 'PA', 'RI', 'SC', 'SD', 'TN', 'TX', 'UT', 'VT', 'VA', 'WA', 'WV', 'WI', 'WY'};
    cout<< "Please enter the 2 digit state combination that you live in\n";
    cin >> userInput;
    toupper(*userInput);
    for(int i = 0; i < 50; i++){
        count+=1; // the first case is case 1
        if(*userInput == state[i]){
            break;
        }
    }
   
    const double case_rate = 5038; //cases per 1 million people
    double rate;
    switch(count){
    //found the percentage of residents for each state who have the coronavirus by diving the amount of cases (in that state) by the total population of that state
    //That percentage was then compared to the country average and depending if it falls below or above, it has a positive or negative impact on the factor of exposure
    
        case 1:
            rate = 2886;
            break;

        case 2:
            rate = 558;
            break;
    
        case 3:
            rate = 2204;
            break;    

        case 4:
            rate = 1914;
            break;

        case 5:
            rate = 2344;
            break;
        
        case 6:
            rate = 4161;
            break;

        case 7:
            rate = 11225;
            break;
        
        case 8:
            rate = 8924;
            break;

        case 9:
            rate = 2334;
            break;

        case 10:
            rate = 3979;
            break;

        case 11:
            rate = 454;
            break;

        case 12:
            rate = 1469;
            break;

        case 13:
            rate = 8507;
            break;
        
        case 14:
            rate = 4590;
            break;

        case 15:
            rate = 5456;
            break;
        
        case 16:
            rate = 3082;
            break;
    
        case 17:
            rate = 1918;
            break;

        case 18:
            rate = 7968;
            break;
    
        case 19:
            rate = 1498;
            break;
    
        case 20:
            rate = 7525;
            break;

        case 21:
            rate = 13299;
            break;
    
        case 22:
            rate = 5444;
            break;
    
        case 23:
            rate = 3519;
            break;
    
        case 24:
            rate = 4370;
            break;
    
        case 25:
            rate = 448;
            break;
    
        case 26:
            rate = 6198;
            break;
    
        case 27:
            rate = 2499;
            break;
    
        case 28:
            rate = 3007;
            break;
    
        case 29:
            rate = 17418;
            break;
    
        case 30:
            rate = 3241;
            break;
    
        case 31:
            rate = 19002;
            break;

        case 32:
            rate = 2181;
            break;

        case 33:
            rate = 3103;
            break;

        case 34:
            rate = 2693;
            break;
        
        case 35:
            rate = 2693;
            break;        

        case 36:
            rate = 1506;
            break;
        
        case 37:
            rate = 922;
            break;
        
         case 38:
            rate = 5557;
            break;
    
        case 39:
            rate = 13170;
            break;
        
        case 40:
            rate = 1922;
            break;
        
        case 41:
            rate = 5051;
            break;
    
        case 42:
            rate = 2898;
            break;
        
        case 43:
            rate = 1914;
            break;
        
        case 44:
            rate = 2576;
            break;

        case 45:
            rate = 1529;
            break;
    
        case 46:
            rate = 4246;
            break;
        
        case 47:
            rate = 2678;
            break;

        case 48:
            rate = 965;
            break;
        
        case 49:
            rate = 2555;
            break;
        

        case 50:
            rate = 1405;
            cout << "This is a test" << endl;
            break;
        

    }
    double state_rate = rate / case_rate;
    cout << "The rate for the state of " << userInput << " compared to the us average is " << state_rate << endl;
    return 0;
}