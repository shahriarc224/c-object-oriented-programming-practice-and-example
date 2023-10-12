/*
Youtube channel:Learn coding .
Example of binary operator overloding using class functiuon .

Defination:An operator which contains two operands is called a binary operator overloding .
*/

#include<iostream>
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
    demo operator +(demo obj)
    {
        demo temp(0,0);
        temp.a=a+obj.a;
        temp.b=b+obj.b;
        return temp;

    }

};


int main ()
{
    demo ob(10,20),ob1(30,40),ob2(0,0);
    ob2=ob+ob1;
    ob2.show();
    return 0;
}

//But if we dont usew demo temp(0,0) ten we have to use a default constractor 

//->>>//i coudnt run this code  ......................


#include<iostream>
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

    void show(){

    }
    demo operator +(demo obj)
    {
        demo temp;
        temp.a=a+obj.a;
        temp.b=b+obj.b;
        return temp;

    }

};


int main ()
{
    demo ob(10,20),ob1(30,40),ob2;
    ob2=ob+ob1;
    ob2.show();
    return 0;
}

/*
Example of binary operator overloding using class functiuon and frind function .


*/

