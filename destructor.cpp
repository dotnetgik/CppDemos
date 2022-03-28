#include <iostream>
using namespace std;
class Wall{
public:
	
  //Constructor
  Car(){
    cout<<"Constructor is called"<<endl;
  }
  //Destructor
  ~Car(){
    cout<<"Destructor is called"<<endl;
   }
   //Member function
   void display(){
     cout<<"Hello from display!"<<endl;
   }
};
int main(){
   //Object created
   Car obj;
   //Member function called
   obj.display();
   return 0;
}
