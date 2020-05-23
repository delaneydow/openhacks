#ifndef LIB_H
#define LIB_H
#include <string>

class Exposure{
    //Everything returned as a type double, as all this data is to be combined into a point-driven formula to compute a single percentage
    private:
    //location will be a string 
        double location();
        double outsideHouse(); //will be a double, and will take in both hours and minutes, perhaps seconds
        double interactions(); //asking the user how many interactions he/she has had
        double precautions(); //asking the user about mask wearing, time spent social distancing
        double livingConditions(); //asking the user where he she lives
    public:
        double caseNumber(); //taken from google/ open source info
        double spreadRate(); //taken from google 
};
class Danger{
    private:
        double age(); //will return the users age in format : You are x years and y months old
        double gender();  
        double medicalConditions(); //asks the user about previous medical conditions, returns input
        
};      






#endif 