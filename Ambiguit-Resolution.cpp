/*
                                                                                                         Youtube: Codeitup
                                                                                                         link:https:  //youtu.be/4lTLMxqjhgE?si=SXk4HUnWQ_kxGx72
 Ambiguit-Resolution:
 
***************Derived class(child class ),Base class (parents class).

*/


#include<iostream>
using namespace std;
class A{
    protected:
    int a;
    public:
    void input(){
        cout<<"\nEnter  value:";
        cin>>a;
    }
    void output(){
        cout<<"\n A="<<a;
    }
    
};
class B{
    
  protected:
    int b;
    public:
    void input(){
        cout<<"\nEnter  value:";
        cin>>b;
    }
    void putdata(){
        cout<<"\n B="<<b;
    }   
    };
    
    class C:public A,public B  
    {
        int c;
        public:
        void input(){
            cout<<"\nEnter value:";
            cin>>c;
            A::input(); //class A function input is connected
            B::input(); //class B function input is connected
            }
        void display(){
            
            cout<<"\n c="<<c;
              }
     };

int main(){
    C ob;        //make an object of Derived class.
    ob.input();  //call the function of the derived class
    ob.display();  
    ob.output(); //call the function of A
    ob.putdata(); //call the function of B
    }


// 2nd 

#include<iostream>
using namespace std;
class A{
    protected:
    int a;
    public:
    void input(){
        cout<<"\nEnter  value:";
        cin>>a;
    }
    void output(){
        cout<<"\n A="<<a;
    }
    
};
class B{
    
  protected:
    int b;
    public:
    void input(){
        cout<<"\nEnter  value:";
        cin>>b;
    }
    void putdata(){
        cout<<"\n B="<<b;
    }   
    };
    
    class C:public A,public B  
    {
        int c;
        public:
        void getdata()   /* the function name  is different .So in this case we ned to connect the other classes 
                         function with this function nad then call the function main funtion */
            {
            cout<<"\nEnter value:";
            cin>>c;
            A::input(); //class A function input is connected
            B::input();  //class B function input is connected
            }
        void display(){
            
            cout<<"\n c="<<c;
              }
     };

int main(){
    C ob;        //make an object of Derived class.
    ob.getdata();  //call the function of the derived class
    ob.display();  
    ob.output(); //call the function of A
    ob.putdata(); //call the function of B
    }






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



                                                                                                              
                                                                                                              
                                                                                                     
