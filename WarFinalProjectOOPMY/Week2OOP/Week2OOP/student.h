#include <string>
using namespace std; 

class Student
{
private:
	  
	string fName = "";
	string lName = "";
	string streetAddress = "";
	string city = "";
	string state = "";
	int zipCode = 0;
	float earnedCredits = 0.0f;
	float totalGPAPoints = 0.0f;
	float GPA = 0.0f; 
	
	
public:
	
	void set_earnedCredits(float new_eC);  
	void set_totalGPAPoints(float new_totalGPAPoints); 
	void set_fName(string new_fName); 
	void set_lName(string new_lName); 
	void set_streetAddress(string new_streetAddress); 
	void set_city(string new_city); 
	void set_state(string new_state); 
	void set_zipCode(int new_zipCode);
	string get_fName(); 
	string get_lName(); 
	string get_streetAddress(); 
	string get_city(); 
	string get_state(); 
	int get_zipCode(); 
	float get_earnedCredits(); 
	float get_totalGPAPoints(); 
	float get_GPA(); 
	 
	
	
};



