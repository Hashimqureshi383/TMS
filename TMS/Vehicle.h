#include"Info.h"
#include"Service.h"

	class Vehicle
{
	int vId;
	int registrationNo;
	float avgMileage;
	char * LicenceType; // License required for driving the vehicle
	bool status; // false for free, true if booked in a service already
	char * fueltype;
	float overallRanking;
	Date manufacturingDate;
	Feature * list;
	int f_size;
	Service ** serviceHistory;
	int s_size;
	//Add services address in the array for tracking complete information of service.
	//you can add more members here if required
	//add member functions
 public:
	Vehicle();
	Vehicle(int,int,float,char*,bool,char*,float,Date,Feature*,Service**);
	Vehicle(const Vehicle &);
	void set_vId(int);
	void set_reg(int);
	void set_avg(float);
	void set_lics(char*);
	void set_status(bool);
	void set_fuel(char*);
	void set_rank(float);
	void set_date(Date);
	void set_features(Feature*,int);
	void set_service_rec(Service**,int);
	int get_vId();
	int get_reg();
	float get_avg();
	char* get_lics();
	bool get_status();
	char* get_fuel();
	float get_rank();
	Date get_date();
	Feature* get_features();
	Service** get_service_rec();
	friend ostream & operator <<(ostream &,const Vehicle &);
	friend istream & operator >>(istream &,Vehicle &);
	friend ofstream & operator <<(ofstream &,const Vehicle &);
	friend ifstream & operator >>(ifstream &,Vehicle &);
	void print();
	~Vehicle();
};
//add Complete Hierarchy of vehicles based on their types and functions
