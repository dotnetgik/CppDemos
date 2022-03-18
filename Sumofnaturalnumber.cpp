// Program to find the sum of 5 natural numbers
// sum= 1+2+3+4+5 (15)

#include<iostream>

using namespace std;

int main(){
	
	int number;
	
	cout<<"Enter Number to find sum of ";
	
	cin>>number;
	
	
	int sum;
	
	for(int counter=1;counter<=number;counter++)
	{
		cout<<" Sum is "<< sum<<" counter is  "<<counter<<endl;    
		sum=sum+counter;
	}
	
	 //first iteration= 0+1,(sum+counter)
	//Second iteration= 1+2,(sum+counter)
	//Third iteration= 3+3,(sum+counter)
    //fourth Iteration= 6+4,(sum+counter)
    // Fifth iteration= 10+5,(sum+counter)
	
	cout<<"Addition is " << sum;
	
	return 0;
}

