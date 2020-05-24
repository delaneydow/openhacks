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
    double out_of_house =  hours / interactions;  
    
    return out_of_house;
}

double Exposure:: precautions(char ){



}
double Exposure:: livingConditions(char ){



}

double Exposure::
double Exposure::
double Exposure::
double Exposure::

double Danger:: 
void Danger::
void Danger:: 
