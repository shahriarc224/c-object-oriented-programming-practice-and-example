#include <iostream>
using namespace std;

class employee
{

    int id;
    string name;

public:
    void getdata()
    {
        cout << "Enter Data:" << endl;
        cin >> id >> name;
    }
    void putdata()
    {

        cout << " Employee id and name : " << id << "  " << name << endl;
    }
};

int main()               
{
    employee ob[10];        //array in object. 
    int i, no;
    cout << "How many employee:" << endl;
    cin >> no;

    for (i = 0; i < no; i++)
    {
        ob[i].getdata();
    }

    for (i = 0; i < no; i++)
    {
        ob[i].putdata();
    }
    return 0;
}
