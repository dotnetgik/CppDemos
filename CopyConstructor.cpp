#include <iostream>
using namespace std;

// declare a class
class Wall {
  public:
    double length;
    double height;

  public:

    // initialize variables with parameterized constructor
    Wall(double len, double hgt) {
      length = len;
      height = hgt;
    }
    // copy constructor with a Wall object as parameter
    // copies data of the obj parameter
    Wall(Wall &obj) {
    	
    cout<<"Calling copy constructor for wall"<<endl;
    
      length = obj.length;
      height = obj.height;
    }
    

   
};

int main() {
  // create an object of Wall class
  Wall wall1(10, 8.6);

 cout<<"Height of wall1 is " <<wall1.height<<endl;
  cout<<"Length of wall1 is " <<wall1.length<<endl;
cout<<"======================================="<<endl;

  // copy contents of wall1 to wall2
  Wall wall2(wall1);
  
  cout<<"Height of wall2 is " <<wall2.height<<endl;
  cout<<"Length of wall2 is " <<wall2.length<<endl;

 

  return 0;
}
