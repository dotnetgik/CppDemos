#include<iostream>
using namespace std;

int add(int a,int b)
{
	return (a+b);
}

int subtract(int a , int b)
{
	return (a-b);
}

int main()
{
	int a , b;
	
	cout<<"Enter First value::";
	cin>>a;
	cout<<"Enter Second value::";
	cin>>b;
	
	cout<<"Before swapping a and b is  " <<a << " and "<<b <<endl;
	
	a=add(a,b);
	b=subtract(a,b);
	a=subtract(a,b);
	
	cout<<"After swapping a and b is  " <<a << " and "<<b <<endl;
	
	
	return 0;
}
