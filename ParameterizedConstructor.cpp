// C++ program to calculate the area of a wall

#include <iostream>
using namespace std;

// declare a class
class Wall {
  public:
    double length;
    double height;

  public:
    // parameterized constructor to initialize variables
    Wall(double len, double hgt) 
	{
      length = len;
      height = hgt;
    }

    double calculateArea() {
      return length * height;
    }
};

int main() 
{
  // create object and initialize data members
  Wall wall1(10.5, 8.6);
  Wall wall2(8.5, 6.3);

cout<<"Length of wall1  is  " <<wall1.length <<endl;
cout<<"Height of wall1  is  " <<wall1.height <<endl;


cout<<"Length of wall2  is  " <<wall2.length <<endl;
cout<<"Height of wall2  is  " <<wall2.height <<endl;

cout << "Area of Wall 1: " << wall1.calculateArea() << endl;
cout << "Area of Wall 2: " << wall2.calculateArea();

  return 0;
}
