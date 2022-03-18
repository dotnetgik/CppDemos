
#include<iostream>
#include<string>
using namespace std;

string SayHello(string name,int marks,char grade)
{
return "Your name is " + name ;
}

int main()
{
	
	string message=SayHello("PQR",15,'A');
	
	cout<<message;
	
	return 0;
	
}
