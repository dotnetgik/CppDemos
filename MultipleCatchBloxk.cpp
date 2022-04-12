#include<iostream>

using namespace std;

int main()
{
int a=10, b=0, c;
try
{
	//if a is divided by b(which has a value 0);
	if(b==0)
		throw(c); 
	else
	c=a/b; 		
		
}
catch(...)     //catch block to handle/catch exception
{
	cout<<"An exception has occured";
}

}
