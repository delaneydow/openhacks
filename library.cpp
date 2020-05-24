#include library.h
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


// implementation of Danger class 

    // implement danger object 
    Danger::Danger()
        
void Danger::Age() {

}

void Danger::Gender(){

}

void Danger::medicalConditions(){

}

// implementation of Test class 
    // initialize test object 
    Test::Test() 

void Test::industry(){

}

// implementation of Analysis class 
    // initialize analysis object 
    Analysis::Analysis() 
void Analysis::exposureAnalysis() {

}

void Analysis::dangerAnalysis(){

}

void Analysis::testAnalysis(){

}
