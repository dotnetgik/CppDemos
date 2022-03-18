#include <iostream>
using namespace std;

int main() {
    
    // initialize an array without specifying size
    double numbers[6] = {1, 2, 3, 4, 5, 6};

    double sum = 0;
    
    double average;

    cout << "The numbers are: ";

   
    for (int n=0;n<=5;n++) {
        cout << numbers[n] << "  ";
        //  calculate the sum
        sum =sum+numbers[n];
    }

    // print the sum
    cout << "\nTheir Sum = " << sum << endl;

    // find the average
    average = sum / 6;
    cout << "Their Average = " << average << endl;

    return 0;
}
