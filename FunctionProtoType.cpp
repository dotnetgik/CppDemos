#include<iostream>

using namespace std;

int add(int ,int);

int main()
{
	int sum;	

	sum=add(11,3);

	cout<<sum;

	return 0;
}

int add(int x,int y){

	return (x+y);

}

