#include"Vehicle.h"

	Vehicle::Vehicle()
{
	vId=0;
	registrationNo=0;
	avgMileage=0;
	LicenceType=0;
	status=0;
	fueltype=0;
	overallRanking=0;
	list=0;
	serviceHistory=0;
}
	Vehicle::Vehicle(int vid,int no,float avg,char* lics,bool status,char* fuel,float rank,Date date,Feature* list,Service** rec)
{
	vId=vid;
	registrationNo=no;
	avgMileage=avg;
	LicenceType=new char [10];
	strcpy(LicenceType,lics);
	this->status=status;
	fueltype=new char [10];
	strcpy(fueltype,fuel);
	overallRanking=rank;
	manufacturingDate=date;
	this->list=list;
	serviceHistory=rec;
}
	Vehicle::Vehicle(const Vehicle &vehicle)
{
	vId=vehicle.vId;
	registrationNo=vehicle.registrationNo;
	avgMileage=vehicle.avgMileage;
	LicenceType=new char [10];
	strcpy(LicenceType,vehicle.LicenceType);
	status=vehicle.status;
	fueltype=new char [10];
	strcpy(fueltype,vehicle.fueltype);
	overallRanking=vehicle.overallRanking;
	manufacturingDate=vehicle.manufacturingDate;
	list=vehicle.list;
	serviceHistory=vehicle.serviceHistory;
}
	void Vehicle::set_vId(int vid)
{
	vId=vid;
	
}
	void Vehicle::set_reg(int no)
{
	registrationNo=no;
	
}
	void Vehicle::set_avg(float avg)
{
	avgMileage=avg;
	
}
	void Vehicle::set_lics(char* lics)
{
	if(LicenceType!=0)
		delete [] LicenceType;
	LicenceType=new char [10];
	strcpy(LicenceType,lics);
	
}
	void Vehicle::set_status(bool status)
{
	this->status=status;
	
}
	void Vehicle::set_fuel(char* fuel)
{
	if(fueltype!=0)
		delete [] fueltype;
	fueltype=new char [10];
	strcpy(fueltype,fuel);
	
}
	void Vehicle::set_rank(float rank)
{
	overallRanking=rank;
	
}
	void Vehicle::set_date(Date date)
{
	manufacturingDate=date;
	
}
	void Vehicle::set_features(Feature* list)
{
	this->list=list;
}
	void Vehicle::set_service_rec(Service** rec)
{
	serviceHistory=rec;
}
	int Vehicle::get_vId()
{
	return vId;
}
	int Vehicle::get_reg()
{
	return registrationNo;
}
	float Vehicle::get_avg()
{
	return avgMileage;
}
	char* Vehicle::get_lics()
{
	return LicenceType;
}
	bool Vehicle::get_status()
{
	return status;
}
	char* Vehicle::get_fuel()
{
	return fueltype;
}
	float Vehicle::get_rank()
{
	return overallRanking;
}
	Date Vehicle::get_date()
{
	return manufacturingDate;
}
	Feature* Vehicle::get_features()
{
	return list;
}
	Service** Vehicle::get_service_rec()
{
	return serviceHistory;
}
	Vehicle::~Vehicle()
{
	vId=0;
	registrationNo=0;
	avgMileage=0;
	if(LicenceType!=0)
		delete [] LicenceType;
	LicenceType=0;
	status=0;
	if(fueltype!=0)
		delete [] fueltype;
	fueltype=0;
	overallRanking=0;
	list=0;
	serviceHistory=0;
}