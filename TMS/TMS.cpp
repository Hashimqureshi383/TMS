#include"TMS.h"

	TMS::TMS()
{
	drivers=0;
	customers=0;
	vehicles=0;
	services=0;
	d_size=0;
	c_size=0;
	v_size=0;
	s_size=0;
}
	TMS::TMS(Driver** driver,int size1,Customer** customer,int size2,Vehicle** vehicle,int size3,Service** service,int size4)
{
	int index=0;
	d_size=size1;
	drivers=new Driver* [d_size];
	for(index=0;index<d_size;index++)
	{
		*(drivers+index)=new Driver;
		**(drivers+index)=**(driver+index);
	}
	c_size=size2;
	customers=new Customer* [c_size];
	for(index=0;index<c_size;index++)
	{
		*(customers+index)=new Customer;
		**(customers+index)=**(customer+index);
	}
	v_size=size3;
	vehicles=new Vehicle* [v_size];
	for(index=0;index<v_size;index++)
	{
		*(vehicles+index)=new Vehicle;
		**(vehicles+index)=**(vehicle+index);
	}
	s_size=size4;
	services=new Service* [s_size];
	for(index=0;index<s_size;index++)
	{
		*(services+index)=new Service;
		**(services+index)=**(service+index);
	}
}
	TMS::TMS(const TMS &tms)
{
	int index=0;
	d_size=tms.d_size;
	drivers=new Driver* [d_size];
	for(index=0;index<d_size;index++)
	{
		*(drivers+index)=new Driver;
	}
	c_size=tms.c_size;
	customers=new Customer* [c_size];
	for(index=0;index<c_size;index++)
	{
		*(customers+index)=new Customer;
	}
	v_size=tms.v_size;
	vehicles=new Vehicle* [v_size];
	for(index=0;index<v_size;index++)
	{
		*(vehicles+index)=new Vehicle;
	}
	s_size=tms.s_sizesize;
	services=new Service* [s_size];
	for(index=0;index<s_size;index++)
	{
		*(services+index)=new Service;
		**(services+index)=**(tms.services+index);
	}
}
	void TMS::set_drivers(const Driver**,int size)
{
	int index=0;
	d_size=size;
	drivers=new Driver* [d_size];
	for(index=0;index<d_size;index++)
	{
		*(drivers+index)=new Driver;
	}
}
	void TMS::set_customers(const Customer**,int size)
{
	int index=0;
	c_size=size;
	customers=new Customer* [c_size];
	for(index=0;index<c_size;index++)
	{
		*(customers+index)=new Customer;
	}
}
	void TMS::set_vehicles(const Vehicle**,int size)
{
	int index=0;
	v_size=size;
	vehicles=new Vehicle* [v_size];
	for(index=0;index<v_size;index++)
	{
		*(vehicles+index)=new Vehicle;
	}
}
	void TMS::set_services(const Service**service,int size)
{
	int index=0;
	s_size=size;
	services=new Service* [s_size];
	for(index=0;index<s_size;index++)
	{
		*(services+index)=new Service;
		**(services+index)=**(service+index);
	}
}
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
	bool TMS::set_records(string str)
{
	string path="Data/Customers/";
	path=path+str;
	path=path+".txt";
	ofstream out;
	out.open(path,ios::app);
	if(out.is_open())
		return true;
	else
		return false;
}
	bool TMS::update_customer(char* str,int id)
{
	string path="Data/Customers/";
	path=path+str;
	path=path+".txt";
	ofstream out;
	out.open("path");
	if(out.is_open())
	{
		int index=0;
		for(index=0;index<c_size;index++)
		{
			if((*(customers+index))->get_cId()==id)
			{
				out<<*(*(customers+index));
			}
		}
		return true;
	}
	else 
		return false;
}
	bool TMS::update_driver(char* str,int id)
{
	string path="Data/Drivers/";
	path=path+str;
	path=path+".txt";
	ofstream out;
	out.open("path");
	if(out.is_open())
	{
		int index=0;
		for(index=0;index<d_size;index++)
		{
			if((*(drivers+index))->get_dId()==id)
			{
				out<<*(*(drivers+index));
			}
		}
		return true;
	}
	else 
		return false;
}
	bool TMS::update_vehicle(char* str,int id)
{
	string path="Data/Vehicles/";
	path=path+str;
	path=path+".txt";
	ofstream out;
	out.open("path");
	if(out.is_open())
	{
		int index=0;
		for(index=0;index<v_size;index++)
		{
			if((*(vehicles+index))->get_vId()==id)
			{
				out<<*(*(vehicles+index));
			}
		}
		return true;
	}
	else 
		return false;
}
	bool TMS::update_customer_service(string str,int id)
{
	string path="Record/Customers/";
	path=path+str;
	path=path+".txt";
	ofstream out;
	out.open("path",ios::app);
	if(out.is_open())
	{
		int index=0;
		int index1=0;
		for(index=0;index<c_size;index++)
		{
			if((*(customers+index))->get_cId()==id)
			{
				for(index1=0;index1<(*(customers+index))->get_s_size();index1++)
				{
					out<<**((*(customers+index))->get_services()+index1);
				}
			}
		}
		return true;
	}
	else 
		return false;
}
	bool TMS::update_driver_service(string str,int id)
{
	string path="Record/Drivers/";
	path=path+str;
	path=path+".txt";
	ofstream out;
	out.open("path",ios::app);
	if(out.is_open())
	{
		int index=0;
		int index1=0;
		for(index=0;index<d_size;index++)
		{
			if((*(drivers+index))->get_dId()==id)
			{
				for(index1=0;index1<(*(drivers+index))->get_s_size();index1++)
				{
					out<<**((*(drivers+index))->get_services()+index1);
				}
			}
		}
		return true;
	}
	else 
		return false;
}
	bool TMS::add_customer(Customer &customer)
{
	if(c_size<15)
	{ 
		int index=0;
		if(c_size>0)
		{ 
			for(index=0;index<c_size;index++)
			{
				if((*(customers+index))->get_cId()==customer.get_cId())
				{
					cout<<endl<<"Customer Already added.";
					return false;
				}
			}
			Customer** temp;
			temp=new Customer* [c_size];
			for(index=0;index<c_size;index++)
			{
				*(temp+index)=new Customer;
				*(*(temp+index))=*(*(customers+index));
			}
			for(index=0;index<c_size;index++)
			{
				delete *(customers+index);
			}
			delete [] customers;
			c_size++;
			this->customers=new Customer* [c_size];
			for(index=0;index<(c_size-1);index++)
			{
				*(customers+index)=new Customer;
				*(*(customers+index))=*(*(temp+index));
			}
			*(*(customers+index))=customer;
		}
		else
		{ 
			c_size++;
			customers=new Customer* [c_size];
			*customers=new Customer;
			**customers=customer;
		}
		return true;
	}
	else 
		return false;
}
	bool TMS::add_driver(Driver &driver)
{
	if(d_size<10)
	{ 
		int index=0;
		if(d_size>0)
		{ 
			for(index=0;index<d_size;index++)
			{
				if((*(drivers+index))->get_dId()==driver.get_dId())
				{
					cout<<endl<<"Driver Already added.";
					return false;
				}
			}
			Driver** temp;
			temp=new Driver* [d_size];
			for(index=0;index<d_size;index++)
			{
				*(temp+index)=new Driver;
				*(*(temp+index))=*(*(drivers+index));
			}
			for(index=0;index<d_size;index++)
			{
				delete *(drivers+index);
			}
			delete [] drivers;
			d_size++;
			drivers=new Driver* [d_size];
			for(index=0;index<(d_size-1);index++)
			{
				*(drivers+index)=new Driver;
				*(*(drivers+index))=*(*(temp+index));
			}
			*(*(drivers+index))=driver;
		}
		else
		{
			d_size++;
			drivers=new Driver* [d_size];
			*drivers=new Driver;
			**drivers=driver;
		}
	}
	else 
		return false;
}
	bool TMS::remove_driver(const Driver &driver)
{
	if(d_size>0)
	{ 
		int index=0;
		int index1=0;
		Driver** temp;
		temp=new Driver* [d_size];
		for(index=0;index<d_size;index++)
		{
			*(temp+index)=new Driver;
			*(*(temp+index))=*(*(drivers+index));
		}
		for(index=0;index<d_size;index++)
		{
			delete *(drivers+index);
		}
		delete [] drivers;
		d_size--;
		drivers=new Driver* [d_size];
		for(index=0,index1=0;index<d_size;index1++)
		{
			if((*(temp+index))->get_dId()!=driver.get_dId())
			{
				*(*(drivers+index))=*(*(temp+index1));
				index++;
			}
		}
	}
	return false;
}
	bool TMS::add_vehicle(Vehicle &vehicle)
{
	if(v_size<20)
	{ 
		int index=0;
		if(v_size>0)
		{ 
			for(index=0;index<v_size;index++)
			{
				if((*(vehicles+index))->get_vId()==vehicle.get_vId())
				{
					cout<<endl<<"Vehicle Already added.";
					return false;
				}
			}
			Vehicle** temp;
			temp=new Vehicle* [v_size];
			for(index=0;index<v_size;index++)
			{
				*(temp+index)=new Vehicle;
				*(*(temp+index))=*(*(vehicles+index));
			}
			for(index=0;index<v_size;index++)
			{
				delete* (vehicles+index);
			}
			delete [] vehicles;
			v_size++;
			vehicles=new Vehicle* [v_size];
			for(index=0;index<(v_size-1);index++)
			{
				*(vehicles+index)=new Vehicle;
				*(*(vehicles+index))=*(*(temp+index));
			}
			*(*(vehicles+index))=vehicle;
		}
		else
		{
			v_size++;
			vehicles=new Vehicle* [v_size];
			*vehicles=new Vehicle;
			**vehicles=vehicle;
		}
	}
	else 
		return false;
}
	bool TMS::remove_vehicle(Vehicle &vehicle)
{
	if(v_size>0)
	{ 
		int index=0;
		int index1=0;
		Vehicle** temp;
		temp=new Vehicle* [v_size];
		for(index=0;index<v_size;index++)
		{
			*(temp+index)=new Vehicle;
			*(*(temp+index))=*(*(vehicles+index));
		}
		for(index=0;index<v_size;index++)
		{
			delete *(vehicles+index);
		}
		delete [] vehicles;
		v_size--;
		vehicles=new Vehicle* [v_size];
		for(index=0,index1=0;index<v_size;index1++)
		{
			if((*(temp+index))->get_vId()!=vehicle.get_vId())
			{
				*(*(vehicles+index))=*(*(temp+index1));
				index++;
			}
		}
	}
	return false;
}
	void TMS::print_customers()
{
	int index=0;
	cout<<endl<<"The Customers Registered are = ";
	for(index=0;index<c_size;index++)
	{
		cout<<**(customers+index)<<endl;
	}
}
	void TMS::print_drivers()
{
	int index=0;
	cout<<endl<<"The Drivers Registered are = ";
	for(index=0;index<d_size;index++)
	{
		cout<<**(drivers+index)<<endl;
	}
}
	void TMS::print_vehicles()
{
	int index=0;
	cout<<endl<<"The Vehicles Registered are = ";
	for(index=0;index<v_size;index++)
	{
		cout<<**(vehicles+index)<<endl;
	}
}
	void TMS::print_vehicle(Vehicle &vehicle)
{
	int index=0;
	for(index=0;index<v_size;index++)
	{
		if((*(vehicles+index))->get_vId()==vehicle.get_vId())
		{
			cout<<**(vehicles+index);
		}
	}
}
	void TMS::print_customer(int id)
{
	int index=0;
	for(index=0;index<c_size;index++)
	{
		if((*(customers+index))->get_cId()==id)
		{
			cout<<**(customers+index);
		}
	}
}
	void TMS::print_driver(int id)
{
	int index=0;
	for(index=0;index<d_size;index++)
	{
		if((*(drivers+index))->get_dId()==id)
		{
			cout<<**(drivers+index);
		}
	}
}
	void TMS::print_high_ranked_drivers()
{
	int index=0;
	cout<<endl<<"Drivers above Rank 4.5 are ";
	for(index=0;index<d_size;index++)
	{
		if((*(drivers+index))->get_rank()>=4.5)
		{
			cout<<**(drivers+index);
		}
	}
}
	void TMS::print_licensed_drivers()
{
	int index=0;
	cout<<endl<<"Drivers having Multiple Licenses are ";
	for(index=0;index<d_size;index++)
	{
		if((*(drivers+index))->get_lics()>=2)
		{
			cout<<**(drivers+index);
		}
	}
}
	void TMS::print_updated_salary()
{
	int index=0;
	cout<<endl<<"Updated Salaries of Drivers are ";
	for(index=0;index<d_size;index++)
	{
		cout<<endl<<"Driver Id is"<<(*(drivers+index))->get_dId();
		cout<<endl<<"Driver Name is = "<<(*(drivers+index))->get_name();
		cout<<endl<<"Driver's Salary is = "<<(*(drivers+index))->get_salary()<<endl;
	}
}
	bool TMS::service_request(const Customer &customer)
{
	int d_choice=0;
	int v_choice=0;
	int index=0;
	cout<<endl<<"Choose Any one of the following Drivers = "<<endl;
	for(index=0;index<d_size;index++)
	{
		cout<<(*(drivers+index))->get_name()<<endl;
		cout<<(*(drivers+index))->get_rank()<<endl<<endl;
	}
	cin>>d_choice;
	cout<<endl<<"Choose Any one of the following Vehicles = "<<endl;
	for(index=0;index<v_size;index++)
	{
		cout<<(*(vehicles+index))->get_vId()<<endl;
		cout<<(*(vehicles+index))->get_rank()<<endl<<endl;
	}
	cin>>v_choice;

}
	void TMS::cancel_book(const Service &,const Customer &)
{
	
}
	void TMS::complete_ride(Service &);
	void TMS::print_same_vehicle_customers()
{
	int index=0;
	int index1=0;
	for(index=0;index<v_size;index++)
	{
		cout<<endl<<"The Customers having Vehicle no. "<<(*(vehicles+index))->get_vId()<<" are "<<endl;
		for(index1=0;index1<s_size;index++)
		{
			if((*(services+index))->get_vId()==(*(vehicles+index))->get_vId())
			{
				print_customer((*(services+index))->get_cId());
			}
		}
	}
}
	void TMS::print_same_date_drivers()
{

}
	void TMS::print_date_pending_services(const Date &date)
{
	int index=0;
	for(index=0;index<s_size;index++)
	{
		if(((*(services+index))->get_date()==date)&&((*(services+index))->get_status()==false))
		{
			cout<<*(*(services+index));
		}
	}
}
	void TMS::print_driver_pending_services(int id)
{
	int index=0;
	for(index=0;index<s_size;index++)
	{
		if(((*(services+index))->get_dId()==id)&&((*(services+index))->get_status()==false))
		{
			cout<<*(*(services+index));
		}
	}
}
	void TMS::print_cancelled_services(int id)
{
	int index=0;
	for(index=0;index<cs_size;index++)
	{
		if((*(c_services+index))->get_cId()==id)
		{
			cout<<*(*(c_services+index));
		}
	}
}
	TMS::~TMS()
{
	if(drivers!=0)
	{
		int index=0;
		for(index=0;index<d_size;index++)
			delete *(drivers+index);
		delete [] drivers;
	}
	drivers=0;
	if(customers!=0)
	{
		int index=0;
		for(index=0;index<c_size;index++)
			delete *(customers+index);
		delete [] customers;
	}
	customers=0;
	if(vehicles!=0)
	{
		int index=0;
		for(index=0;index<v_size;index++)
			delete *(vehicles+index);
		delete [] vehicles;
	}
	vehicles=0;
	if(services!=0)
	{
		int index=0;
		for(index=0;index<s_size;index++)
			delete *(services+index);
		delete [] services;
	}
	services=0;
	if(c_services!=0)
	{
		int index=0;
		for(index=0;index<cs_size;index++)
			delete *(c_services+index);
		delete [] c_services;
	}
	d_size=0;
	c_size=0;
	v_size=0;
	s_size=0;
	cs_size=0;
}