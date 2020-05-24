#include <string>
#include <iostream>

using namespace std;

int main(){
    string conditions;
    string condition_list[8] = {"chronic lung disease", "asthma", "heart conditions", "immune deficiencies", 
	"obesity", "diabetes", "chronic kidney disease", "liver disease"};
	for(int i = 0; i < 8 ; i++){
		cout << condition_list[i] << "\t";
    }
	cout << endl;
	cout <<"Enter any underlying medical conditions that you have" << endl; 
	cin >> conditions; 
	tolower(conditions)


}