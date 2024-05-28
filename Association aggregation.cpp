#include<iostream>
#include<iomanip>

using namespace std;

class Contact{
	private:
		string phone;
	public:
		Contact(string p)
		{
			phone=p;
		};
		string getPhone(){return phone;
		};
};

class Car{
	private:
		string plate;
	public:
		Car(string p){
			plate=p;
		};
		string getPlate(){return plate;
		};

};

class Customer
{
	private:
		string name;
		Contact p; // shows composition relationship
		Car *car; //shows aggregration relationship
	public:
		Customer(string n,string phone) :p(phone)
		{
			name=n;
			
		};
		
		string getName(){return name;
		}
		
		string getPhoneNumber(){
			return p.getPhone();
		};
		
		string getRentedCarPlate(){
			return car->getPlate();
		};
		
		void setRentedCar(Car* c){
			car=c;
		};
};

int main()
{
	Car ob("JSQ245");
	Car ob2(" ");
	Customer customer[2]={Customer("Ahmad Kamal","015-75769800"),Customer("Siti Nurdiana Abdullah","014-8889900")};
	customer[0].setRentedCar(&ob);
	customer[1].setRentedCar(&ob2);
	for(int x=0;x<2;x++)
	{
		
		cout<<"Customer's Name: "<<customer[x].getName()<<endl;
		cout<<"Phone number: "<<customer[x].getPhoneNumber()<<endl;
		cout<<"Rented Car: "<<customer[x].getRentedCarPlate()<<"\n"<<endl;
		
	}
	
	return 0;
}

