#include"Person.h"
#include"Vehicle.h"

	class TMS
{
	Driver** drivers;
	Customer** customers;
	Vehicle** vehicles;
	Service** services;

 public:
	TMS();
	TMS(Driver**,Customer**,Vehicle**,Service**);
	TMS(const TMS &);
	void set_drivers(const Driver**);
	void set_customers(const Customer**);
	void set_vehicles(const Vehicle**);
	void set_services(const Service**);
	Driver** get_drivers();
	Customer** get_customers();
	Vehicle** get_vehicles();
	Service** get_services();
	bool add_customer(const Customer &);
	bool add_driver(const Driver &);
	bool remove_driver(const Driver &);
	bool add_vehicle(const Vehicle &);
	bool remove_vehicle(const Vehicle &);
	void print_customers();
	void print_drivers();
	void print_vehicles();
	void print_vehicle(const Vehicle &);
	void print_customer(const Customer &);
	void print_driver(const Driver &);
	void print_high_ranked_drivers();
	void print_licensed_drivers();
	void print_updated_salary();
	bool service_request(const Customer &);
	void cancel_book(const Service &,const Customer &);
	void complete_ride(Service &);
	void print_same_vehicle_customers();
	void print_same_date_drivers();
	void print_date_pending_services();
	void print_driver_pending_services();
	void print_cancelled_services();
	~TMS();
}
