/*
                                                                                                         Youtube: Codeitup
                                                                                                         link:https:  //youtu.be/4lTLMxqjhgE?si=SXk4HUnWQ_kxGx72
Ambiguit-Resolution:


*/












/*                                                                                          Youtube:Simple Snippets
                                                                                             link:https:  //youtu.be/3XUXSiC-hPE?si=2XrZSt3q60m46Tkm
*/     
//Example:
#include<iostream>
using namespace std;
//Base class 1
class A
{
public:
    void printmessage()
    {
        cout<<"Class A print message function."<<endl;
    }
};
//Base class 2
class B
{
public:
    void printmessage()
    {
        cout<<"Class B print message function."<<endl;
    }
};
//Derived class
class AB:public A,public B
{
public:
    void printmessage()
    {
        A::printmessage();
        B::printmessage();
        cout<<"Class AB print message function."<<endl;

    }
};
int main()
{
    AB obj;
    obj.printmessage();

}



                                                                                                              
                                                                                                              
                                                                                                     
