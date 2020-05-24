#include "library.h"
#include <iostream>
#include <fstream>
#include <curl/curl.h>
#include <iomanip> //for setprecision function

using namespace std;

Exposure::Exposure() 
{
    //default constructor 
}

double Exposure::location(string location){

//need to take the users location and search for the state in the curl return data file with a for loop
   /* CURL *curl;
    CURLcode res;
    string readBuffer;

    curl = curl_easy_init();
    if(curl) {
        curl_easy_setopt(curl, CURLOPT_URL, "http://www.google.com");
        curl_easy_setopt(curl, CURLOPT_WRITEFUNCTION, WriteCallback);
        curl_easy_setopt(curl, CURLOPT_WRITEDATA, &readBuffer);
        res = curl_easy_perform(curl);
        curl_easy_cleanup(curl);

        cout << readBuffer << endl;
    }
//when the for loop returns a location:: */ 


  return 0;
}

// from data 
double Exposure::caseNumber() {

}

// from data 
double Exposure::spreadRate() {

}

// based on # of interactions with people per day 
// returns value to be used in analysis class
    // based on # of hours spent outside the house 
    // output is k = "average number of daily exposures of the latent"
double Exposure::Interactions(unsigned int hours, unsigned int interactions){
    double k =  (double) interactions / hours;  // cast to be type double   
    return k;
}

// based on precautionary measures user enters 
// taking precautionary measures reduced rate of infection 
double Exposure::Precautions(char precautions){
    // declare output variable
    double b1; // a factor that could increase or decrease probability of infection
// selects options of precautions inputted by user 
    //outputs percentage of transmission this would decrease b 
    // b is probability of being infected, with 1.0 being guaranteed infection 
    if (precautions == 'a') // wearing a mask
    {
        b1 = 0.33; //one third assuming other user is wearing a mask
       // b1 = xxxx; // add value
    } 
    else if (precautions == 'x') // social distancing
    {
        b1 = 0.15; //very low, for obvious reasons , but a bit high to integrate inaccuracies 
       // b1 = xxxx; // add value
    }
    else if (precautions == 'u') // quarantined 
    {
        b1 = 0.5; //not zero, because of contact with other people i.e. grocery store delivries
        // b1= xxx; // add value 
    }
    else 
        b1 = 0.99;
       // b1 = 1.0; // no precautions are taking, assumed probability of 100% 
return b1; 
}
    // based on environment user lives in 
// higher densities increase rates of infection 
double Exposure:: livingConditions(char living){
// declare output variable 
    double b2; // factor that could increase or decrease probability of infection 
    if (living == 'p') // aparment, city 
    {
        b2 = 0.40; // citizens living in urban areas have a 2x higher death rate, thus 
        // b2 = xxx; 
    }
    else if (living == 'b') // suburban area
    {
        b2 = 0.20;
        // b2 = xxx; 
    }
    else if (living == 'r') // rural area
    {
        b2 = 0.10;
        // b2 = xxx; 
    }
    else 
        cout << "error, invalid character entered" << endl; 

return b2; 
}

// getter functions for Exposure class 
double Exposure::getLocation()
{
    // return determined value from curl 
}

double Exposure::getInteractions()
{
    return k; 
}

double Exposure::getPrecautions() 
{
    return b1; 
}

double Exposure::getLiving() 
{
    return b2; 
}
Exposure:: ~Exposure () 
{
    cout <<"Exposure destructed." << endl; 
}

// effects probability of being infected 
Danger::Danger() 
{
    //default constructor 
}

double Danger::Age(unsigned int age) {
// declare output variable 
    // double Danger::getAge(); // don't think you need this 
    double b3; 
    if (age >= 0 && age <= 20) // children & adolescents 
    {
        b3 = 0.015;
    }
    else if (age > 20 && age <= 30) // young adults 
    {
        b3 =  0.07;
    }
    else if (age > 30 && age <= 60) // middle age
    {
        b3 = 0.17;
    }
    else if (age > 60 && age >= 80) // elderly 
    {
        b3 = 0.24;
    }
    else 
    {
        // assumes age is over 80, very old 
        b3 = .40;
    }
    return b3 * .47; //age is weighted to be 47% of the total danger 
}       

// effects probability of being infected 
double Danger::Gender(char gender){
    // declare output value 
    double b4; 
    if (gender == 'f') 
    {
        b4 = .10; //average death rate is 10% assuming undercountage
        // b4 = xxxx; // set value
    }
    else
    {
        // assume value is 'm' because of error checking 
        b4 = .24; //men are 2.4 times more likely to die
        //b4 = xxx; // set value 
    }
    return b4 * .03; //gender is weighted to be 3% of the total danger
}

// effects probability of being infected 
double Danger::medicalConditions(char conditions){
    double b5; // creates return value
    // set comparison 
        if (conditions == 'y') // health condition is present  
        {
            b5 = 0.40;
            // b5 = xxxx; // set value 
        }
        else{
            b5 = 0.01;
        } 
    return b5 * 0.50; //medical conditions is weighted to be 50% of the danger, 
}

// getters for danger 
double Danger::getAge() 
{
    return b3; 
}

double Danger::getGender() 
{
    return b4; 
}

double Danger::getConditions()
{
    return b5; 
}

Danger:: ~Danger() 
{
    cout << "Danger destructed" << endl; 
} 

// implementation of Test class 
 Test:: Test() 
{
    //default constructor 
}

double Test::Industry(char industry)
{
    double b6 = 1.0;
    // double Test::getindustry() { // don't think you'd need a getter since test class can access data within its class
    if(industry == 'y'){
        b6 *= 1.116; // this is how much more likely front line workers are compared to normal people
    }
    else{
        b6 *=1
    }
        
    return b6; // exits function 
}

double Test::getIndustry()
{
    return b6;
} 

Test:: ~Test()
{
    cout << "Test destructed." << endl; 
}

// implementation of Analysis class 
 Analysis:: Analysis()
{
    //default constructor 
}

double Analysis::exposureAnalysis(double b1, double b2, double k) {

/*double Exposure::getlocation()
    double Exposure::getoutsideHouse()
    double Exposure::getinteractions() // returns k 
    double Exposure::getPrecautions() // returns b1
    double Exposure::getLiving() // returns b2
    double Exposure::caseNumber()
    double Exposure::spreadRate()

*/ 
   // double test = Exposure.k; 
    double exposureResult = (b1 + b2) * k/24; 
    return exposureResult; 


}
//ch


double Analysis::dangerAnalysis(double b3, double b4, double b5){
    /*
    double Danger:getAge() // return b3
    double Danger:getGender() // return b4
    double Danger:getConditions() // return b5
    */ 
    double dangerResult = b3 + b4 + b5;
    return dangerResult; 
}

double Analysis::testAnalysis(char industry, unsinged int age){
    
    // uses age data and industry data 
    double testResult;
    // access industry data 
    if (industry == 'y') 
    {
        testResult = 4.0; 
    }
    else if (industry == 'n') 
    {
       if (age <= 20) 
       {
        testResult = 0.5; 
       } 
       else if (age > 20 && age <= 40) 
       {
        testResult = 1.0; 
       }
       else if (age > 40 && age <= 60)
       {
        testResult = 1.5; 
       }
       else if (age > 60)
       {
        testResult = 3.0; 
       }
    } 
    else 
        testResult = 0.0; 
    
    return testResult;    
}

Analysis:: ~Analysis()
{
    // destructor 
    cout << "Analysis destructed." << endl; 
}
