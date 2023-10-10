/*



*/

#include<iostream>
using namespace std;
class A
{
    int a,b;
public:
    A(int a,int b)
    {

        this->a=a;   //this pointer
        this->b=b;   //this pointer

    }
    void show()
    {

        cout<<a<<" "<<b<<endl;

    }
};
int main()
{
    A obj(10,20);
    obj.show();

    return 0;
}
