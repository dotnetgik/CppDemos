# What are different types of datatype in C++
There are two types of datatypes in c and C++
- Built in Datatypes/ Predefined datatypes
  - int
  - char
  - float
  - double
- User defined datatypes
  - array
  - string
  - structure
  - pointer


# Difference between equal to (==) and assignment operator(=)?
- The equal to operator == checks whether two values are equal or not. If equal, then it’s true; otherwise, it will return false.

- The assignment operator = allots the value of the right-side expression to the left operand.


# Discuss the difference between prefix and postfix?
In prefix (++i), first, it increments the value, and then it assigns the value to the expression.

In postfix (i++), it assigns the value to the expression, and then it increments the variable's value. 

# What is the difference between C and C++?
<table>
  <tr>
    <td align="center">C</td>
        <td align="center">C++</td>
  </tr>
 <tr>
    <td>C is a procedure-oriented programming language</td>
        <td>C++ is a object oriented programming</td>
  </tr>
   <tr>
    <td>It follows a top-down approach</td>
        <td>It follows a bottom-up approach</td>
  </tr>
   <tr>
    <td>C doesn’t support function or operator overloading</td>
        <td>C++ supports function as well as function overloading</td>
  </tr>
   <tr>
    <td>C language doesn’t support virtual and friend function</td>
        <td>C++ language supports both virtual and friend functions.</td>
  </tr>
</table>
# What are different types of error
 -  Compile time error
 -  Run time errors

# What are exit controlled loop and entry contrplled loop
Entry controlled loop- <strong>For loop, while loop</strong> (The condition is checked at the beginning)
exit controlled loop -<strong>do...while</strong> ( the condition is checked at last ) 

 # What is the difference between a while loop and a do-while loop?
<table>
  <tr>
    <td>
      while loop
    </td>
    <td>
      do..while
    </td>
    
    
    
  </tr>
  
  <tr>
    <td>
      verifies the condition; if it’s true, then it iterates the loop till the condition becomes fals
    </td>
    <td>
      The do-while loop first iterates the loop body once, then it checks for the condition
    </td>
    
    
    
  </tr>
  
  <tr>
    <td>
     If the condition is false in a while loop, then not a single statement will execute inside the loop.
    </td>
    <td>
      If the condition in a do-while loop is false, then the body will also execute once.
    </td>
    
    
    
  </tr>
    
  </tr>
  </table>
  
# What are keywords?
Keywords are reserved words. They have specific meaning in C language. They cannot be used as a variable name. Following table lists all the keywords present in C programming language-

# What are decision-making statements are there in C?
C conditional statements allow you to make a decision based upon the result of a condition. These statements are called Decision Making Statements or Conditional Statements. So far, we have seen that all set of statements in a C program gets executed sequentially in the order in which they are written and appear.
There are 6 types of decision making in C++
 - if 
 - if...else
 - else if ladder
 - switch statement
 - conditional operator statement
 - goto statement
 
  # What is function in C?
  The function is a block of programming statement, under one name that performs a particular task. You must declare a function before using it
  - Built in Functions
  - User defined functions
  # What do you mean by array?
  - An array is a group of homogeneous elements stored continuously under a single name.
  - The size of an array can not be changed after its declaration. You can access array element by indices. Array index starts at zero.
  <p>
  Syntax
datatype arrayname[size];

Example
int noofplayers[12];</p>

# How do you access the elements in Array
Elements stored in an array is accessed by indexe. Suppose you declared an array noOfStudents as above. The first element is noofplayers[0], noofplayers[1], noofplayers[2] and so on.

#  What is multidimensional array?
Array or array is called Multidimensional array. In C programming language, we mostly use 2D (two-dimensional) array and 3D (three-dimensional) array. Two-dimensional array is a collection of rows where each row is considered as a one dimension array.
```
Syntax of 2D array
data-type array_name[row][column]
```
#  What are Basic concepts of OOP.
 - Class ==> A Blueprint of an object , Collection of data member and member function , a User defined datatype
 - Object ==> A Variable of a class, 
 - Inheritance ==> Process of inheriting the one class to another class
 - Polymorphisam ==> Ability of a single thing to have more than one form
 - Abstraction ==> Hiding internal details and showing functionality to the user.
 - Encapsulation ==> Binding code and function together into a single unit

# What is class?
A class is like a blueprint of an object. It is a user-defined data type with data members and member functions and is defined with the keyword class.

# What is Object
Objects as an instance of a class. It can be defined as the variable if the class .

# What is a constructor?
A constructor is  a member function that is invoked whenever you create an object; it has the same name as that of the class.
There are three types of constructors
- Default constructor
- Parameterized constructor
- Copy Constructor

# Can Constructor be overloaded
 Yes they can be overloade

# What is destructor ? 
 A destructor is a member function that is invoked automatically when the object goes out of scope or is explicitly destroyed by a call to delete . A destructor has the same name as the class, preceded by a tilde ( ~ ).

# Can destructor be overloaded 
 No they cannot be overloaded
 
# What is Polymorphisam
Polymorphisam is an ability of a single thing to have more than one form there are two types of polyorphisam

# What are different types of Polymorphisam
 There are two types of polymorphism
 - Compile time polymorphism
 - Run time polymorphism

# What is Compile time polymorphism? 
A compile time polymorphism is the process is the one in which resolutuion happens at the there are two ways in which we can achieve the compile time polymorphism
 - Function Overloading
 - Operatior Overloading
 
# What is function overloading ? 
Function overloading is a feature of object oriented programming where two or more functions can have the same name but different parameters.When a function name is overloaded with different jobs it is called Function Overloading.In Function Overloading “Function” name should be the same and the arguments should be different.
   # Correct way of Polymorphisam
      ```
      int Add( int x,int y);

      float Add(float x,float y);
      ```
   # Incorrect way of polymorphism
```
int add(int x,int y);
float add(int x,int y);

Here we need the different signature of a function to implement the comople time polyorphisam
```
# What is Operator Overloading
Operator overloading lets the operators have an extended meaning apart from their predefined meaning. we can change the way operators work for user-defined types like objects and structures. 
# Which operator cannot be overloaded
Ternary operation (?:) cannot be overloaded

# What is Run time polymorphism
Run time polymorphism is the mechanisam in which the resoultion of the things happen at the time of execution of the program there are two ways we can acheive the run time polymorphism
- Virtual function
- Function Overriding

# What is Virtual functions
A virtual function is a member function in the base class that we expect to redefine in derived classes. Basically, a virtual function is used in the base class in order to ensure that the function is overridden. This especially applies to cases where a pointer of base class points to an object of a derived class.

# What is Function Overriding
Function overriding in C++ is a feature that allows us to use a function in the child class that is already present in its parent class. The child class inherits all the data members, and the member functions present in the parent class.
sss
# What is a friend function?
We can define a friend function as a function that can access private, public and protect members of the class. We declare the friend function with the help of the friend keyword. We declare this function inside the class.

# What is inheritance?
Inheritance is the mechanism in which you can create a new class i.e. child class from the existing class i.e. parent class. This child class is also known as a derived class and the parent class is also called Base class. 
```
Class A{

}

Class B:public A
{

}
```
# What are different visibility mode in C++

Visibility mode defines how the members of the base class  are visible in the child class There are three visibility mode available 
- Public visibility mode
- Private visibility mode
- Protected visibility mode 

Following tables shows how the base class members will be treated in the derviced class in different modes 

# Inheritance when the Public Visibility Mode is selected
   In this mode the private members are never inherited and then the Protected member remains protected and public members remains the public member

| Accessibility  | # Private Member | # Protected Member | # Public Member 
| ------------- | ------------- |--------------------- |----------------------
| Base Class  | YES  |YES |YES
| Derived Class  | NO  |YES|YES
#


# Inheritance when the Protected Visibility Mode is selected
  In this mode the private members are never inherited and then the Protected member remains protected and public members becomes protected members
| Accessibility  | Private Member | Protected Member | Public Member 
| ------------- | ------------- |--------------------- |----------------------
| Base Class  | YES  |YES |YES
| Derived Class  | NO  |YES|Yes (inherited as protected variables)
#

# Inheritance when the Private Visibility Mode is selected

  In this mode the private members are never inherited and then the Protected member become private and public members becomes private members
  
| Accessibility  | Private Member | Protected Member | Public Member 
| ------------- | ------------- |--------------------- |----------------------
| Base Class  | YES  |YES |YES
| Derived Class  | NO  |Yes (inherited as private variables)|Yes (inherited as private variables)
# #

# What are access modifiers
We use access modifiers to define accessibility for the class members. It defines how to access the members of the class outside the class scope.
There are three types of access modifiers:
- Public
- Private
- Protected



