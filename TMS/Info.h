#include<iostream>

 using namespace std;

	class Name 
{
	char* fName;
	char* lName;
 public:
	Name(char* fN, char* lN);
	//add following functions //Getter, Setters
	//Destructor, Default Constructor, Copy Constructor,
	friend ostream& operator<<(ostream& out, const Name& n);
};
	ostream& operator<<(ostream& out, const Name& n) 
{
	out << n.fName << " " << n.lName << endl;
	return out;
}
	class Date
{
	int day;
	int month;
	int year;
	//add constructurs getter setters and stream output function, which output date in 
	//given format day / Mon / Year
};
	class mTime
{
	int hour;
	int min;
	int sec;
	//add constructurs getter setters and stream output function, which output time in 
	//given format Hr : Min: Sec
};
	class Feature
{
	int fId;
	char * description;
	float cost;
	//you can add more members here if required
	//add member functions
};
	