#include <iostream>  
using namespace std;  
class A  
{  
    public:  
    void display()  
    {  
       cout << " In Class A Display" << std::endl;  
    }  
};  
class B  
{  
    public:  
    void display()  
    {  
        cout << "In Class B Display" << std::endl;  
    }  
};  
class C : public A, public B  
{  
public:
    void view()  
    {  
  
        A::display();  
        B::display();
    }  
};  
int main()  
{  
    C c;  
    c.view();  
    return 0;  
}  
