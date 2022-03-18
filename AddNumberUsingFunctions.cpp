// program to add two numbers using a function 

#include <iostream>
using namespace std;

// declaring a function
int add(int a, int b) 
{

    int c= (a + b);
     
    return c;
}

int main() {

    int sum;
  sum=  add(35, 67);
 cout << "35 + 67 = " << sum << endl;

sum=  add(5455, 467);

 cout << "5455 + 467 = " << sum << endl;

sum=  add(4566, 4567);

 cout << "4566 + 4567 = " << sum << endl;
    return 0;
}
