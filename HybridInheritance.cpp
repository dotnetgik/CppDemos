#include <iostream>  

using namespace std;  
class A  
{  
    public:  
    int a;  
    
};  
  
class B : public A   
{  
    public:  
    int b;  
   
};  
class C   
{  
    public:  
    int c;  
   
};  
  
class D : public B, public C  
{  
    public:  
    int d;  
    void mul()  
    {  
         cout << "Multiplication of a,b,c is : " <<a*b*c<< endl;  
    }  
};  
int main()  
{  
    D d;  
    cout<<"Get the value of a ::"<<endl;
    cin>>d.a;
    cout<<"Get the value of b ::"<<endl;
    cin>>d.b;
    
    cout<<"Get the value of c ::"<<endl;
    cin>>d.c;
    
    d.mul();  
    return 0;  
}  
