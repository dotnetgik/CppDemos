#include<iostream>
using namespace std;

// Function prototype
void display(int =10,float=15.60);

int main(){	
	// Call without any argument
	cout<<"Call without argument"<<endl;
	display();
	cout<<"============================"<<endl;
	// Call with one argument
	cout<<"Call with 1 argument"<<endl;
	display(100);
	cout<<"============================"<<endl;
	// Call with both argument
	cout<<"Call with both argument"<<endl;
	display(100,34.56);
cout<<"============================"<<endl;	

	// Call with one argument only which will be passed to the first argument
cout<<"Call withone argument only which will be passed to the first argument"<<endl;
	display(25.36);
	cout<<"============================"<<endl;
	return 0;
}

void display(int x,float y)
{
	
cout<<"X is " <<x<<endl;
cout<<"y is " <<y<<endl;
}
