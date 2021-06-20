#pragma once
#include"Person.h"
#include"Vehicle.h"

	class TMS
{
	Driver** drivers;
	int d_size;
	Customer** customers;
	int c_size;
	Vehicle** vehicles;
	int v_size;
	Service** services;
	int s_size;
	Service** c_services;
	int cs_size;

 public:
	TMS();
	TMS(Driver**,int,Customer**,int,Vehicle**,int,Service**,int);
	TMS(const TMS &);
	void set_drivers(const Driver**,int);
	void set_customers(const Customer**,int);
	void set_vehicles(const Vehicle**,int);
	void set_services(const Service**,int);
	void set_d_size(int);
	void set_c_size(int);
	void set_v_size(int);
	int get_d_size();
	int get_c_size();
	int get_v_size();
	Driver** get_drivers();
	Customer** get_customers();
	Vehicle** get_vehicles();
	Service** get_services();
	bool set_records(string);
	bool update_customer(char*,int);
	bool update_driver(char*,int);
	bool update_vehicle(char*,int);
	bool update_customer_service(string,int);
	bool update_driver_service(string,int);
	bool add_customer(Customer &);
	bool add_driver(Driver &);
	bool remove_driver(Driver &);
	bool add_vehicle(Vehicle &);
	bool remove_vehicle(Vehicle &);
	void print_customers();
	void print_drivers();
	void print_vehicles();
	void print_vehicle(Vehicle &);
	void print_customer(int);
	void print_driver(int);
	void print_high_ranked_drivers();
	void print_licensed_drivers();
	void print_updated_salary();
	bool service_request(const Customer &);
	void cancel_book(const Service &,const Customer &);
	void complete_ride(Service &);
	void print_same_vehicle_customers();
	void print_same_date_drivers();
	void print_date_pending_services(Date &);
	void print_driver_pending_services(int);
	void print_cancelled_services(int);
	void menu();
	~TMS();
};
