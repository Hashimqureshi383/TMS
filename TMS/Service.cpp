#include"Service.h"
	
	Service::Service()
{
	source=0;
	destination=0;
	distance=0;
	status=false;
	fuelrate=0;
	cId=0;
	dId=0;
	vId=0;
}
	Service::Service(char* source,char* destination,float distance,Date date,mTime time,bool status,float fuelrate,int cid,int did,int vid)
{
	this->source=source;
	this->destination=destination;
	this->distance=distance;
	this->status=status;
	this->fuelrate=fuelrate;
	bookingDate=date;
	bookingTime=time;
	cId=cid;
	dId=did;
	vId=vid;
}
	Service::Service(const Service &service)
{
	source=service.source;
	destination=service.destination;
	distance=service.distance;
	status=service.status;
	fuelrate=service.fuelrate;
	bookingDate=service.bookingDate;
	bookingTime=service.bookingTime;
	cId=service.cId;
	dId=service.dId;
	vId=service.vId;
}
	void Service::set_source(char* source)
{
	this->source=source;
}
	void Service::set_destination(char* destination)
{
	this->destination=destination;
}
	void Service::set_distance(float distance)
{
	this->distance=distance;
}
	void Service::set_date(Date date)
{
	bookingDate=date;
}
	void Service::set_time(mTime time)
{
	bookingTime=time;
}
	void Service::set_status(bool status)
{
	this->status=status;
}
	void Service::set_rate(float fuelrate)
{
	this->fuelrate=fuelrate;
}
	void Service::set_cId(int cid)
{
	cId=cid;
}
	void Service::set_dId(int did)
{
	dId=did;
}
	void Service::set_vId(int vid)
{
	vId=vid;
}
	char* Service::get_source()
{
	return source;
}
	char* Service::get_destination()
{
	return destination;
}
	float Service::get_distance()
{
	return distance;
}
	Date Service::get_date()
{
	return bookingDate;
}
	mTime Service::get_time()
{
	return bookingTime;
}
	bool Service::get_status()
{
	return status;
}
	float Service::get_rate()
{
	return fuelrate;
}
	int Service::get_cId()
{
	return cId;
}
	int Service::get_dId()
{
	return dId;
}
	int Service::get_vId()
{
	return vId;
}
	Service::~Service()
{
	if(source!=0)
		delete source;
	source=0;
	if(destination!=0)
		delete destination;
	destination=0;
	distance=0;
	status=false;
	fuelrate=0;
	cId=0;
	dId=0;
	vId=0;
}
	Ride::Ride()
{
	noofPassengers=0;
	rideType=0;
	DriverRanking=0;
	VehicleRanking=0;
}
	Ride::Ride(int no,char* type,float d_rank,float v_rank,char* source,char* destination,float distance,Date date,mTime time,bool status,float fuelrate,int cid,int did,int vid):Service(source,destination,distance,date,time,status,fuelrate,cid,did,vid)
{
	noofPassengers=no;
	rideType=new char [10];
	strcpy(rideType,type);
	DriverRanking=d_rank;
	VehicleRanking=v_rank;
}
	void Ride::set_passengers(int no)
{
	noofPassengers=no;
}
	void Ride::set_type(char* type)
{
	if(rideType!=0)
		delete [] rideType;
	rideType=new char [10];
	strcpy(rideType,type);
}
	void Ride::set_d_rank(float d_rank)
{
	DriverRanking=d_rank;
}
	void Ride::set_v_rank(float v_rank)
{
	VehicleRanking=v_rank;
}
	void Ride::print()
{
	cout<<endl<<"The No of Passengers is = "<<noofPassengers;
	cout<<endl<<"The Type of Ride is = "<<rideType;
	cout<<endl<<"The Ranking Of Driver is = "<<DriverRanking;
	cout<<endl<<"The Ranking of Vehicle is = "<<VehicleRanking;
}
	Ride::~Ride()
{
	noofPassengers=0;
	if(rideType!=0)
		delete [] rideType;
	rideType=0;
	DriverRanking=0;
	VehicleRanking=0;
}
	Delivery::Delivery()
{
	goodsWeight=0;
	goodsType=0;
}
	Delivery::Delivery(float weight,char* type,char* source,char* destination,float distance,Date date,mTime time,bool status,float fuelrate,int cid,int did,int vid):Service(source,destination,distance,date,time,status,fuelrate,cid,did,vid)
{
	goodsWeight=weight;
	goodsType=new char [10];
	strcpy(goodsType,type);
}
	void Delivery::set_g_weight(float weight)
{
	goodsWeight=weight;
}
	void Delivery::set_g_type(char* type)
{
	if(goodsType!=0)
		delete [] goodsType;
	goodsType=new char [10];
	strcpy(goodsType,type);
}
	float Delivery::get_g_weight()
{
	return goodsWeight;
}
	char* Delivery::get_g_type()
{
	return goodsType;
}
	Delivery::~Delivery()
{
	if(goodsType!=0)
		delete [] goodsType;
	goodsWeight=0;
	goodsType=0;
}