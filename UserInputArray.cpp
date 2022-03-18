#include <iostream>
using namespace std;

int main() {
    int numbers[5];

    cout << "Enter 5 numbers: " << endl;

    //  store input from user to array
    for (int i = 0; i < 5; ++i) 
	{
    	int x;
    	cin>>x;
        numbers[i]=x;
    }
    
    //cout<<numbers[0];
    
 
    cout << "The numbers are: ";

    //  print array elements
    for (int j = 0; j < 5; ++j) {
        cout << numbers[j] << "  ";
    }

    return 0;
}
