// Overload ++ when used as prefix

#include <iostream>
using namespace std;

class Count {
   private:
    int value;

   public:

    // Constructor to initialize count to 5
    Count()  {
    	value=10;
	}

    // Overload ++ when used as prefix
    void operator ++ () {
    	cout<<"Calling Prefix function"<<endl;
        ++value;
    }
    
    // Overload ++ when used as postfix
    void operator ++ (int) {
    	cout<<"Calling Postfix function"<<endl;
        value++;
    }

    void display() {
        cout << "Count: " << value << endl;
    }
};

int main() {
    Count count1;

    // Call the "void operator ++ ()" function for prefix
    ++count1;

    count1.display();
    
    Count count2;

    // Call the "void operator ++ ()" function for postfix
    count2++;

    count2.display();
    
    
    
    return 0;
}
