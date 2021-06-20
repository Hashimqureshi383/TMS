#pragma once
#include"Info.h"
#include"Service.h"

	class Person 
{
	Name pName;
	Date DOB;
	int Age;
	int Nid;
 public:
	Person();
	Person(Name,Date,int,int);
	Person(const Person &);
	void set_name(Name);
	void set_dob(Date);
	void set_age(int);
	void set_nid(int);
	Name get_name();
	Date set_dob();
	int set_age();
	int set_nid();
	friend ostream & operator <<(ostream &,const Person &);
	friend istream & operator >>(istream &,Person &);
	friend ofstream & operator <<(ofstream &,const Person &);
	friend ifstream & operator >>(ifstream &,Person &);
	virtual void print();
	virtual void printf();
	~Person();
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
	Customer();
	Customer(int,Service**,int);
	Customer(const Customer &);
	void set_cId(int);
	void set_s_size(int);
	void set_service(const Service**);
	int get_cId();
	Service** get_services();
	int get_s_size();
	friend ostream & operator <<(ostream &,const Customer &);
	friend istream & operator >>(istream &,Customer &);
	friend ofstream & operator <<(ofstream &,const Customer &);
	friend ifstream & operator >>(ifstream &,Customer &);
	void print();
	void printf();
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
	Driver();
	Driver(int,char**,int,float,float,int,int,Service**,int);
	Driver(const Driver &);
	void set_dId(int);
	void set_licenses(const char**);
	void set_lics(int);
	void set_rank(float);
	void set_salary(float);
	void set_xp(int);
	void set_status(int);
	void set_services(const Service**);
	void set_s_size(int);
	int get_dId();
	char** get_licenses();
	int get_lics();
	float get_rank();
	float get_salary();
	int get_xp();
	int get_status();
	Service** get_services();
	int get_s_size();
	friend ostream & operator <<(ostream &,const Driver &);
	friend istream & operator >>(istream &,Driver &);
	friend ofstream & operator <<(ofstream &,const Driver &);
	friend ifstream & operator >>(ifstream &,Driver &);
	~Driver();
	//add following functions in this class
	//Getter, Setters
	//Destructor, Default and Parameterized Constructor, Copy Constructor, Output 
	//operator (prints complete information of Driver)
};
