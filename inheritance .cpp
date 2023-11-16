/*                                                                                                              youtube:apna college
Inheritance: Inheritance is a mechanism of reusing and extending existing classes without modifying them, thus 
producing hierarchical relationships between them.

inheritance has Derived class and a base class.
Derived class(child class ),Base class (parents class).

there are 5 types of inheritance 
1.Single Inheritanc
2.Multiple Inheritance
3.multi lavel Inheritance 
4.Hybrid Inheritance
5.Hierarchical Inheritance 

Example of single inheritance */

//1.Single Inheritanc
//Example:

#include<iostream>
using namespace std;
class A{
public:
void func(){
   cout<<"This class is Inherited"<<endl; 
}
};
class B:public A{
};
int main(){
   B b;
   b.func();
    
    
}

//  2.Multiple Inheritance

//example:

#include<iostream>
using namespace std;
class A{
    public:
    void Afunc(){
         cout<<"Class A is inherited"<<endl;
         }
    };
    
    class B{
    public:
    void Bfunc(){
          cout<<"Class B is inherited"<<endl;
         }
    };
    class C:public A,public B{
    };
int main(){
    
    C c;
    c.Afunc();
    c.Bfunc();
    
}


    
    
