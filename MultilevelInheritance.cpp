#include <iostream>  
using namespace std;  
 class Animal {  
   public:  
 void eat() {   
    cout<<"Can Eat...";   
 }    
   };  
   class Dog: public Animal   
   {    
       public:  
     void bark(){  
    cout<<" , Bark";   
     }    
   };   
   class GermanShepherd: public Dog   
   {    
       public:  
     void RunFast()
	  {  
    cout<<"  Run Fast...";   
     }    
   };   
int main(void) {  
    GermanShepherd d1;  
    cout<<"German shepherd ....." <<endl;
    d1.eat();  
    d1.bark();  
    d1.RunFast();  
     return 0;  
}  
