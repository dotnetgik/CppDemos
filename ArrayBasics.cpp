// Declare and initialize an array of 5 numbers 
// Display them 
#include <iostream>
using namespace std;

int main() {
	// Initialize the array
    int numbers[6] = {7, 5, 6, 12, 35,45};

    cout << "The numbers are: ";
    //  Printing array elements using traditional for loop
    for (int i = 0; i <= 5; ++i) {
        cout <<"Array Position is:: " <<i<<"  "<< numbers[i] << "  "<<endl;
    }

    return 0;
}
