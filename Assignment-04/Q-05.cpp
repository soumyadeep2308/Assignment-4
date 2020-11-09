#include<iostream>
using namespace std;
class base
{
public:
    base()
    {
        cout<<"Base class constructor is called:\n";
    }
    ~base()
    {
        cout<<"Base class destructor is called:\n";
    }
};

class derived_1:public base
{

public:
    derived_1()
    {
        cout<<"derived_1 class constructor is called\n";
    }

    ~derived_1()
    {
        cout<<"derived_1 class destructor is called\n";
    }
};
class derived_2:public base
{
public:
    derived_2()
    {
        cout<<"derived_2 class constructor is called\n";
    }


    ~derived_2()
    {
        cout<<"derived_2 class destructor is called\n";
    }
};

class mutual_child:public derived_1,public derived_2
{
public:
    mutual_child()
    {
        cout<<"Mutual child class constructor is called\n\n\n";
    }
    ~mutual_child()
    {
        cout<<"Mutual child class destructor is called\n";
    }

};

int main()
{
    mutual_child m1;
}
