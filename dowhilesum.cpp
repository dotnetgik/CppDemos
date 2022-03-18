// Sum of n natural numbers 

#include<iostream>
using namespace std;

int main()
{
	int sum;
	int number;
	
	do
	{
		cout<<" Sum is:: " << sum<<" Number is:: " <<number<<endl;
		
		sum=sum+number;
		
		number++;
	}
	while(number<=5);
	
	cout<<"Sum of All the  number is " <<sum;
}
