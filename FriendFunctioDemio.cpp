// C++ program to demonstrate the working of friend function

#include <iostream>
#include<string>
using namespace std;

class Distance 
{
    private:
        int meter;
        // friend function declaration friend retrunType NameOfFunction( ClassName As  Argument )
        friend int AddDistance(Distance);
  
};


// friend function definition
int AddDistance(Distance d) {
	//accessing private members from the friend function
    d.meter=d.meter+1;
    return d.meter;
}

int main() 
{
    Distance D;
    cout << "Distance is " <<AddDistance(D); 
    return 0;
}
