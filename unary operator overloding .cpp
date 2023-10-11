/*
Youtube channel:Learn coding .
unary operator example .

Defination:A operator which contain only one operand is called unary operator  */

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
