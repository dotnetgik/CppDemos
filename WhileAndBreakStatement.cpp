//Find sum of positive numbers
//Whenever user enter negative number break the loop 
#include <iostream>
using namespace std;

int main() {
    int number;
    
    int sum = 0;

    while (true) {
    
	    // take input from the user
        cout << "Enter a number: ";
        cin >> number;

        // break condition if number is negative 
        if (number < 0) {
            break;
        }

        // add all positive numbers
        sum += number;
    }

    // display the sum
    cout << "The sum is " << sum << endl;

    return 0;
}
