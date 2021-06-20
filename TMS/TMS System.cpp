#include"TMS.h"

	bool menu_choice(TMS &);

	int main()
{
	system("Color AF");
	TMS tms;
	while(1)
	{ 
		if(!menu_choice(tms))
		{ 
			return 0;
		}
	}
}
	bool menu_choice(TMS &tms)
{
	system("cls");
	tms.menu();
	Service** v_history;
	Service** history;
	int size=1;
	Customer customer1;
	Driver driver1;
	Vehicle vehicle;
	Date m_date(20,6,2021);
	int choice=0;
	if(choice==1)
	{
		//Customer customer1;
		customer1.set_cId(1);
		tms.add_customer(customer1);
		return true;
	}
	else if(choice==2)
	{
		//Driver driver1;
		driver1.set_dId(1);
		const char** licenses=new const char* [3] {"light","Heavy","Both"};
		driver1.set_licenses(licenses);
		driver1.set_lics(3);
		driver1.set_rank(4);
		driver1.set_salary(1000);
		driver1.set_xp(1000);
		driver1.set_status(1);
		driver1.set_services(history);
		driver1.set_s_size(size);
		tms.add_driver(driver1);
		return true;
	}
	else if(choice==3)
	{
		tms.remove_driver(driver1);
		return true;
	}
	else if(choice==4)
	{
		char* descrp=new char [10] {"Turbo"};
		Feature* features=new Feature [2];
		features->set_fId(1);
		features->set_description(descrp);
		features->set_cost(2000);
		(features+1)->set_fId(2);
		(features+1)->set_description(descrp);
		(features+1)->set_cost(4000);
		char* license=new char [10] {"intracity"};
		char* fueltype=new char [10] {"Petrol"};
		vehicle.set_vId(1);
		vehicle.set_reg(0001);
		vehicle.set_avg(10);
		vehicle.set_lics(license);
		vehicle.set_status(0);
		vehicle.set_fuel(fueltype);
		vehicle.set_rank(4);
		vehicle.set_date(m_date);
		vehicle.set_features(features,2);
		vehicle.set_service_rec(v_history,1);
		tms.add_vehicle(vehicle);
		return true;
	}
	else if(choice==5)
	{
		tms.remove_vehicle(vehicle);
		return true;
	}
	else if(choice==6)
	{
		tms.print_customers();
		return true;
	}
	
	else if(choice==7)
	{
		tms.print_drivers();
		return true;
	}
	else if(choice==8)
	{
		tms.print_vehicles();
		return true;
	}
	else if(choice==9)
	{
		tms.print_customer(1);
		return true;
	}
	else if(choice==10)
	{
		tms.print_driver(1);
		return true;
	}
	else if(choice==11)
	{
		tms.print_vehicle(vehicle);
		return true;
	}
	else if(choice==12)
	{
		tms.print_high_ranked_drivers();
		return true;
	}
	else if(choice==13)
	{
		tms.print_licensed_drivers();
		return true;
	}
	else if(choice==14)
	{
		tms.print_updated_salary();
		return true;
	}
	else if(choice==15)
	{
		return true;
	}
	else if(choice==16)
	{
		return true;
	}
	else if(choice==17)
	{
		return true;
	}
	else if(choice==18)
	{
		tms.print_same_vehicle_customers();
		return true;
	}
	else if(choice==19)
	{
		tms.print_same_date_drivers();
		return true;
	}
	else if(choice==20)
	{
		tms.print_date_pending_services(m_date);
		return true;
	}
	else if(choice==21)
	{
		tms.print_driver_pending_services(1);
		return true;
	}
	else if(choice==22)
	{
		tms.print_cancelled_services(1);
		return true;
	}
	else
	{
		char* str=new char [10] {"Customer1"};
		tms.update_customer(str,1);
		strcpy(str,"Driver1");
		tms.update_driver(str,1);
		tms.update_vehicle(str,1);
		strcpy(str,"Custome1");
		tms.update_customer_service(str,1);
		strcpy(str,"Driver1");
		tms.update_driver_service(str,1);
		return false;
	}
	
}