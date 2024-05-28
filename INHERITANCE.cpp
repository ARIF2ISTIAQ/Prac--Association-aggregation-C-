#include<iostream>
#include<iomanip>
#include<vector>
using namespace std;

class Passenger
{
	protected:
		string name;
		int age;
		
		
	public:
		Passenger(string n,int a){
		
			name=n;
			age=a;
			
			
		}
		void printDetails(){
		
			
			cout<<"Name: "<<name<<" Age: "<<age;
		
		}
		
	
	
	
};

class Time{
	private:
		int hour;
		int minute;
	public:
		Time(int h, int m)
		{
			hour=h;
			minute=m;
		}
		int getHour()
		{
			
			return hour;
		}
		
		int getMinute()
		{
			
			return minute;
		}
	
};

class Flight
{
	private:
		string id;
		string destination;
		Time *depart;
		Time *arrival;
		vector<int> *passengerList;
	public:
		Flight(string i,string dest,Time *dep,Time *arr)
		{
			id=i;
			destination=dest;
			this->depart=dep;
			this->arrival=arr;
		}	
		
		void printInfo(){
			
			cout<<"Flight No: "<<id<<endl;
			cout<<"Destination: "<<destination<<endl;
			cout<<"Departure: "<<depart->getHour()<<":"<<depart->getMinute()<<endl;
			cout<<"Arrival: "<<arrival->getHour()<<":"<<arrival->getMinute()<<endl;
			
		}
		
	
	
};


class Kids:protected Passenger{
	protected:
	string ParentName;
	public:
		Kids(string n1,int a,string n2):Passenger(n1,a){
			ParentName=n2;
		}
	void printDetails(){
			Passenger::printDetails();
		cout<<" Parents name: "<<ParentName<<endl;		}

	
};

class Adults: protected Passenger{
	protected:
		string job;
	public:
		Adults(string n1,int a,string n2):Passenger(n1,a){
		job=n2;	}
		
		void printDetails(){
			Passenger::printDetails();
			cout<<" Job title: "<<job<<endl;
		}
		
		
};





int main()
{
	Time depart_(8,10);
	Time arrival_(9,00);
	Flight f("NAS7921","Johor Bahru",&depart_,&arrival_);
	Adults ad1[2]={Adults("Ali",34,"Lecturer"),Adults("Goh",25,"Student")};
	Kids kd("Azmi",3,"Ali");

	
	f.printInfo();
	
	cout<<"Number of Passengers :3 "<<endl;
	cout<<"Number of Adults: 2"<<endl;
	cout<<"Number of Kids: 1"<<endl;


	cout<<"Passengers Details:\n"<<endl;
	for(int x=0;x<2;x++)
	{
	
	ad1[x].printDetails();
	}
	
	
	
	kd.printDetails();
	
	
	
	
	
}
