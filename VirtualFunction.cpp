#include <iostream> 
using namespace std;

class Shape 
{ 
public:
	virtual void Draw(){
		cout<<"Drawing shape from base class"<<endl;
	}
}; 

class Circle: public Shape 
{ 
public:
	int radius;
	
 public :
 	void Draw()
	 {
 		cout<<"Drawing the circle from child class"<<endl;
	 }
}; 


class Triange: public Shape 
{ 
 public :
 	void Draw()
	 {
 		cout<<"Drawing the triange from child class"<<endl;
	 }
}; 

int main() 
{
	//1
Shape s;
s.Draw();
//2
Circle c;
c.Draw();

//3
Shape s1=c;

s1.Draw();

//4
Shape *s2=&c;
s2->Draw();

Triange t;

s2=&t;
s2->Draw();



return 0; 
}
