// Iterate number from 1 to 5 
// whenever we have  number==3 just break the loop 
#include <iostream>
using namespace std;

int main() {
    for (int number = 1; number <= 5; number++) {
        // break condition     
        if (number == 3) {
            break;
        }
        cout << number << endl;
    }
    cout<<"After loop "<<endl;

return 0;
}
