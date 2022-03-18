#include<iostream>
#include<string>
using namespace std;

//This is how we can Create a Class
class Car
{
	// Data Members
	 public:string model,carName;
	 public: float topspeed;
	
	//Private Member 
	private:string carNumber;
	
	//Member function
	public:void ShowCar()
	{
		cout<<"Name of the car : " <<carName<<endl;
		cout<<"Model of the car is " <<model<<endl;
		cout<<"Top speed of your car is "<<topspeed<<endl;
		cout<<"Your car number is  "<<carNumber; 
	}
	
	public:void SetCarNumber()
	{
	  carNumber="123456";	
	  
	}
};

int main(){
// This is how we can create the Objects 	
Car myOwnCar;

myOwnCar.carName="Audi";
myOwnCar.topspeed=180;
myOwnCar.model="A6";

// We need to use the Public Member function in order to access the private data members inside the class
myOwnCar.SetCarNumber();

myOwnCar.ShowCar();

return 0;
}
