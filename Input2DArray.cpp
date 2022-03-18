#include <iostream>
using namespace std;

int main() {
	
    int numbers[2][3];

    cout << "Enter 6 numbers: " << endl;

    // Storing user input in the array
    for (int row = 0; row < 2; ++row) {
        for (int columns = 0; columns < 3; ++columns) {
        cout<<"Enter the number at Position numbers["<<row <<"]["<<columns<<"]::";
        int x;
        cin>>x;
        numbers[row][columns]=x;
        }
    }

    cout << "The numbers are: " << endl;

    //  Printing array elements
    for (int row = 0; row < 2; ++row) {
        for (int columns = 0; columns < 3; ++columns) {
            cout << "numbers[" << row << "][" << columns << "]: " << numbers[row][columns] << endl;
        }
    }

    return 0;
}
