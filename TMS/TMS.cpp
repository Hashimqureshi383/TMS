#include"TMS.h"

	TMS::TMS()
{
	int index=0;
	drivers=new Driver* [10];
	for(index=0;index<10;index++)
	{
		*(drivers+index)=new Driver;
	}
	customers=new Customer* [15];
	for(index=0;index<15;index++)
	{
		*(customers+index)=new Customer;
	}
	vehicles=new Vehicle* [20];
	for(index=0;index<20;index++)
	{
		*(vehicles+index)=new Vehicle;
	}
	services=0;
}
	TMS::TMS(Driver** driver,Customer** customer,Vehicle** vehicle,Service** service)
{
	int index=0;
	drivers=new Driver* [10];
	for(index=0;index<10;index++)
	{
	*(driver+index)->gedId;
	LicencesList;
	noofLicences;
	overallRanking;
	salary;
	experience;
	status; 
	serviceHistory;
	}
}
	TMS::TMS(const TMS &)
{
}
	void TMS::set_drivers(const Driver**)
{

}
	void TMS::set_customers(const Customer**);
	void TMS::set_vehicles(const Vehicle**);
	void TMS::set_services(const Service**);
	Driver** TMS::get_drivers()
{
	return drivers;
}
	Customer** TMS::get_customers()
{
	return customers;
}
	Vehicle** TMS::get_vehicles()
{
	return vehicles;
}
	Service** TMS::get_services()
{
	return services;
}
	bool TMS::add_customer(const Customer &)
{
	int index=0;
	for(index=0;index<15;index++)
	{
		if(*(customers+index)==0)
		{
			*(customers+index)=new Customer;
			return true;
		}
	}
	return false;
}
	bool TMS::add_driver(const Driver &)
{
	int index=0;
	for(index=0;index<10;index++)
	{
		if(*(drivers+index)==0)
		{
			*(drivers+index)=new Driver;
			return true;
		}
	}
	return false;
}
	bool TMS::remove_driver(const Driver &)
{
	int index=0;
	for(index=0;index<10;index++)
	{
		if(*(drivers+index)==0)
		{
			delete *(drivers+index);
			*(drivers+index)=0;
			return true;
		}
	}
	return false;
}
	bool TMS::add_vehicle(const Vehicle &)
{
	int index=0;
	for(index=0;index<20;index++)
	{
		if(*(vehicles+index)==0)
		{
			*(vehicles+index)=new Vehicle;
			return true;
		}
	}
	return false;
}
	bool TMS::remove_vehicle(const Vehicle &)
{
	int index=0;
	for(index=0;index<20;index++)
	{
		if(*(vehicles+index)==0)
		{
			delete *(vehicles+index);
			*(vehicles+index)=0;
			return true;
		}
	}
	return false;
}
	void TMS::print_customers();
	void TMS::print_drivers();
	void TMS::print_vehicles();
	void TMS::print_vehicle(const Vehicle &);
	void TMS::print_customer(const Customer &);
	void TMS::print_driver(const Driver &);
	void TMS::print_high_ranked_drivers();
	void TMS::print_licensed_drivers();
	void TMS::print_updated_salary();
	bool TMS::service_request(const Customer &);
	void TMS::cancel_book(const Service &,const Customer &);
	void TMS::complete_ride(Service &);
	void TMS::print_same_vehicle_customers();
	void TMS::print_same_date_drivers();
	void TMS::print_date_pending_services();
	void TMS::print_driver_pending_services();
	void TMS::print_cancelled_services();
	TMS::~TMS();