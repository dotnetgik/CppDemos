// Sum of n natural numbers 

#include<iostream>
using namespace std;

int main()
{
	int sum=0;
	int number=1;
	
	while(number<=5)
	{
		cout<<" Sum is:: " << sum<<" Number is:: " <<number<<endl;
		
		sum=sum+number;
		
		number++;
	}
	cout<<"Sum of All the  number is " <<sum;
}
