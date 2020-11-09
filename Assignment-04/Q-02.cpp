

    /*

                       Student
                    |          |
                |                |
            |                       |
     Undergraduate_Student       Graduate_Student
         |  |    |                  |         |
       |     |    |                |           |
      |       |    |              |             |
     |         |    |            |               |
Freshman   Junior  Senior    Doctoral_Student  Masters_Student



     */


#include<iostream>
using namespace std;
class student
{
private:
    string name;
    int student_id;
    int uni_roll;
public:
    void set_details(string name,int a, int b)
    {
        student_id=a;
        uni_roll=b;
        this->name=name;
    }
    void display()
    {
        cout<<"Student name="<<name<<endl<<"Student id="<<student_id<<endl<<"University roll="<<uni_roll<<endl;
    }
};

class undergraduate:public student
{
private:
    string ug_course;
public:
    void set_ug(string ug_course)
    {
        this->ug_course=ug_course;
    }

    void show_ug()
    {
        cout<<"The ug course is:"<<ug_course<<endl<<endl;
    }
};

class graduate:public student
{
private:
    string pg_course;
public:

    void set_pg(string pg_course)
    {
        this->pg_course=pg_course;
    }

    void show_pg()
    {
        cout<<"The pg course is:"<<pg_course<<endl<<endl;
    }
};

class freshmen:public undergraduate
{  public:
    freshmen()
    {
        cout<<"Welcome Freshmen"<<endl;
    }
};

class senior:public undergraduate
{   public:
    senior()
    {
        cout<<"Welcome Senior"<<endl;
    }
};

class junior:public undergraduate
{   public:
    junior()
    {
        cout<<"Welcome Junior"<<endl;
    }
};

class doctoral:public graduate

{

    public:;
    doctoral()
    {
        cout<<"Welcome Doctoral Student"<<endl;
    }
};

class master:public graduate
{
    public:
    master()
    {
        cout<<"Welcome Masters Student"<<endl;
    }
};

int main()
{
    master m1;
    m1.set_details("Sahil Mehar",12,84);
    m1.display();
    m1.set_pg("MTech");
    m1.show_pg();
    freshmen f1;
    f1.set_details("Sam Curran",23,21);
    f1.display();
    f1.set_ug("BBA");
    f1.show_ug();
}
