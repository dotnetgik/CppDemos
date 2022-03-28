// C++ program to demonstrate the use of destructor

#include <iostream>
using namespace std;

// declare a class
class  Wall 
{
  public:
    double length;

  public:
    // default constructor to initialize variable
    Wall() 
	{
    	 cout << "Creating a wall." << endl;
          length = 5.5;
    }
    
    void Display()
    {
    	cout<<"Called Display Function"<<endl;
        cout << "Length = " << length << endl;
	}
	
	// Destructor 
	 ~Wall() 
	{
    	 cout << "destroying wall" << endl;
    }
};

int main() 
{
	
  Wall wall1;
 cout << "Length set from constructor is  :: " << wall1.length << endl;

  wall1.Display();
  
  cout<<"Executing return statement"<<endl;
  
  return 0;
  
}
