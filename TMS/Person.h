#include"Info.h"
#include"Service.h"

	class Person 
{
	Name pName;
	Date DOB;
	int Age;
	int Nid;
 public:
	//add following functions in this class //Getter, Setters
	//Destructor, Default and Parametrized Constructor, Copy Constructor, Output 
	//operator (print information of person)
};
	class Customer:public Person 
{
	int cId;
	// Unique and assigned first time when customer makes first service request
	Service** bookingHistory;
	int s_size;
	//Maintain and Update history of customer for each service (ride or goods 
	//transportation order) by adding address of service in dynamic array.
	//you can add more members here if required
 public:
	//add following functions in this class //Getter, Setters
	//Destructor, Default and Parametrized Constructor, Copy Constructor, Output 
	//operator (print complete information of customer including history if any)
};
	class Driver:public Person 
{
	int dId;
	char** LicencesList;
	int noofLicences;
	float overallRanking;
	float salary;
	int experience;
	int status; // 1 for free, 2 if booked and 3 if canceled
	Service** serviceHistory;
	int s_size;
	//Add services address in the array for tracking complete information of service.
 public:
	//add following functions in this class
	//Getter, Setters
	//Destructor, Default and Parameterized Constructor, Copy Constructor, Output 
	//operator (prints complete information of Driver)
};
