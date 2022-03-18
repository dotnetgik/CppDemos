#include<iostream>
#include<string>
using namespace std;

//This is how we can Create a Class
class Car
{
	// Data Members
	public: string model;
	public: float topspeed;
	public:string carName;
	
	// Member function
	void BuildCar()
	{
		cout<<"Enter Name"<<endl; 
		cin>>carName;
		
		cout<<"Enter Top Speed"<<endl; 
		cin>>topspeed;
		
		cout<<"Enter model"<<endl; 
		cin>>model;
	
	}
	//Member function
	void ShowCar(){
		cout<<"Name of the car : " <<carName<<endl;
		cout<<"Model of the car is " <<model<<endl;
		cout<<"Top speed of your car is "<<topspeed; 
	}
};


int main(){
	

// This is how we can create the Objects 	
Car myOwnCar;

myOwnCar.BuildCar();

myOwnCar.ShowCar();

return 0;
}
