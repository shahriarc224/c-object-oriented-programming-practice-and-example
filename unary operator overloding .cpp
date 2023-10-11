/*
Youtube channel:Learn coding .
Example of unary operator overloding using class functiuon .

Defination:An operator which contain only one operand is called unary operator  */

#include<bits/stdc++.h>
using namespace std;

class demo
{
    int a,b;
public:
    demo(int x,int y)
    {
        a=x;
        b=y;
    }
    void show ()
    {

        cout<<"A="<<a<<endl<<"B="<<b<<endl;

    }

    void operator -()
    {

        a=-a;
        b=-b;

    }

};
int main()
{
    demo ob(10,20);
    ob.show();
    -ob;
    ob.show();

    return 0;

}

//------------------------------------------------------------------------------------------------------------------------------

/*Example of unary operator overloding using class functiuon and friend function.*/

#include<bits/stdc++.h>
using namespace std;

class demo{
    int a,b;
public:
    demo(int x,int y)
    {
        a=x;
        b=y;
    }
    void show ()
    {

        cout<<"A="<<a<<endl<<"B="<<b<<endl;

    }

    friend void operator -(demo &obj);  /*First we are going to write(friend) and after that we are 
                                         going to write the name of the function which we are going
      };                                 to make frind with the classs */};


void operator -(demo &obj )
{

    obj.a=-obj.a;
    obj.b=-obj.b;

}

int main()
{
    demo ob(10,20);
    ob.show();
    -ob;
    ob.show();

    return 0;

}




