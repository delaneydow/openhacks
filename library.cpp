#include "library.h"
#include <iostream>
#include <fstream>
#include <curl/curl.h>
#include <iomanip> //for setprecision function

using namespace std;

double Exposure::location(string location){

//need to take the users location and search for the state in the curl return data file with a for loop
    CURL *curl;
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
//when the for loop returns a location::


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
double Exposure::interactions(unsigned int hours, unsigned int interactions){
    double k =  (double) hours / interactions;  // cast to be type double   
    return k;
}

// based on precautionary measures user enters 
// taking precautionary measures reduced rate of infection 
double Exposure:: precautions(char precautions){
    // declare output variable
    double b1; // a factor that could increase or decrease probability of infection
// selects options of precautions inputted by user 
    //outputs percentage of transmission this would decrease b 
    // b is probability of being infected, with 1.0 being guaranteed infection 
    if (precautions == 'a') // wearing a mask
    {
       // b1 = xxxx; // add value
    } 
    else if (precautions == 'x') // social distancing
    {
       // b1 = xxxx; // add value
    }
    else if (precautions == 'u') // quarantined 
    {
        // b1= xxx; // add value 
    }
    else 
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
        // b2 = xxx; 
    }
    else if (living == 'b') // suburban area
    {
        // b2 = xxx; 
    }
    else if (living == 'r') // rural area
    {
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


// implementation of Danger class 

    // implement danger object 
    Danger::Danger()
// effects probability of being infected 
double Danger::Age(unsigned int age) {
// declare output variable 
    double Danger::getAge()
    double b3; 
    if (age >= 0 && age <= 20) // children & adolescents 
    {
       // b3 = xxx; // assign value  
    }
    else if (age > 20 && age <= 30) // young adults 
    {
        // b3 = xxx; // assign value 
    }
    else if (age > 30 && age <= 60) // middle age
    {
        // b3 = xxx; // assign value 
    }
    else if (age > 60 && age >= 80) // elderly 
    {
        // b3 = xxx; // assign value 
    }
    else 
    {
        // assumes age is over 80, very old 
        // b3 = xxx; // assign value 
    }
    return b3; 
}       

// effects probability of being infected 
double Danger::Gender(){
    // declare output value 
    double b4; 
    if (gender == 'f') 
    {
        // b4 = xxxx; // set value
    }
    else
    {
        // assume value is 'm' because of error checking 
        //b4 = xxx; // set value 
    }
    return b4; 
}

// effects probability of being infected 
double Danger::medicalConditions(){
    // this is funky because i haven't even determine conditions in main yet 
    // tbd but will be a b5 value 
    double b5; 
    return b5; 
}

// getters for danger 
double Danger::getAge() 
{
    return b3; 
}

char Danger::getGender() 
{
    return b4; 
}

double Danger::getConditions()
{
    return b5; 
}

// implementation of Test class 
    // initialize test object 
    Test::Test() 

void Test::industry(){
    double b6;
    double Test::getindustry()
    if(industry == 'y'){

    }
    return b6;
}

// implementation of Analysis class 
    // initialize analysis object 
    Analysis::Analysis() 
void Analysis::exposureAnalysis() {
    double Exposure::getlocation()
    double Exposure::getoutsideHouse()
    double Exposure::getinteractions()
    double Exposure::getprecautions()
    double Exposure::getlivingConditions()
    double Exposure::caseNumber()
    double Exposure::livingConditions()

}

void Analysis::dangerAnalysis(){
    double Danger:getage()
    double Danger:getgender()
    double Danger:getmedicalConditions()

}

void Analysis::testAnalysis(){

}
