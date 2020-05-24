#ifndef LIB_H
#define LIB_H
#include <string>



class Exposure{
    //Everything returned as a type double, as all this data is to be combined into a point-driven formula to compute a single percentage
    private:
    //location will be a string 
        double location(std::string state); 
            // takes location from state abbreviation
        double outsideHouse(double hours); //will be a double, and will take in both hours and minutes, perhaps seconds
        double Interactions(unsigned int hours, unsigned int interactions); //asking the user how many interactions he/she has had
        double Precautions(char precautions); //asking the user about mask wearing, time spent social distancing
        double livingConditions(char living); //asking the user where he she lives
        double k, b1, b2; 
    public:
        Exposure(); // default constructor 
        ~Exposure(); // destructor 
    
        double caseNumber(); //taken from google/ open source info
            // need to determine what the input type is going to be 
        double spreadRate(); //taken from google 
            // need to determine what the input type is going to be 


        // add getters and setters as necessary for analysis class to access private members from Exposure class 
        double getLocation(); 
        double getInteractions(); 
        double getPrecautions(); 
        double getLiving(); 
        friend class Analysis;  // can access private members

};

class Danger{
// add getters and setters as necessary to access private members from Danger class 
    public: 
    Danger(); //default constructor 
    ~Danger(); //destructor 
    double getAge(); 
    double getGender(); 
    double getConditions(); 

    // make friend class and function 
        friend class Analysis; // can access private members

    private:
        double Age(unsigned int age); //will return the users age in format : You are x years and y months old
        double Gender(char gender);  
        double medicalConditions(char conditions); //asks the user about previous medical conditions, returns input
        double b3, b4, b5; 
        
         
};      

// added class Test for third prediction option 
    //output will be how many times per week is recommended for the person to be tested 
class Test{
// add getters and setters as necessary for analysis class to access private members from Test class 
public: 
    Test(); // default constructor 
    ~Test(); //destructor 
    double getIndustry(); 

    friend class Analysis; // can access private members


private: 
    double Industry(char industry); // returns risk of working in an industry that is high risk 
    double b6; // output of industry function; 
    
}; 

// analysis class to sort all data inputted from user 
// uses equations and functions based off of user an data input 
// results in predictions and data analysis that is then reported back to the user 
class Analysis {
public: 
    Analysis(); // default constructor 
    ~Analysis(); //destructor 
    // input types of these functions needs to be determined 
    static double exposureAnalysis(char precautions, char living); 
    static double dangerAnalysis(unsigned int age, char gender, char conditions); 
    static double testAnalysis(char industry, unsigned int age); 

}; 

#endif 
