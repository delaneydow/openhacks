#include library.h
#include <iostream>
using namespace std;

void Exposure::location(string location){

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
  return 0;
}


void Exposure:: outsideHouse(){


}

void Exposure:: interactions(){



}

void Exposure:: precautions(){



}
void Exposure:: livingConditions(){



}

void Exposure::
void Exposure::
void Exposure::
void Exposure::
