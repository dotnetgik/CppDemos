#include<iostream>
using namespace std;

int main()
{
	
	for(int number=1;number<=5;number++){
		
		if(number%2==0){
			
			cout<<"Even number is :: " <<number<<endl;
			continue;
		}
	}
	return 0;
}
