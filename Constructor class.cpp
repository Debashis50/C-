#include<iostream>
using namespace std;

class Student
{
private:
    string name;
    float cgpa;
public:
    static int a;
    void setName(string name)
    {
       this->name=name;
    }
    void setCgpa(float cg)
    {
        cgpa=cg;
    }
    string getName()
    {
        return name;
    }
    float getCgpa()
    {
        return cgpa;
    }
    void setvalues(string nam, float cg)
    {
        name=nam;
        cgpa=cg;

    }
    Student()
    {
        a++;
        cout<<"Default constructor: "<<a<<endl;
    }
    Student(string nam,float cg)
    {
        a++;
       cout<<"Paramit constructor: "<<a<<endl;
       name=nam;
       cgpa=cg;
    }
    ~Student()
    {
       cout<<"Destructor: "<<a<<endl;
       a--;
    }
void show()
{cout<<"Name: "<<getName()<<endl;
cout<<"Cgpa: "<<getCgpa()<<endl;
}
};
int Student::a=0;

int main()
{
    Student s1("Alam",3.90);
    {
        Student s2,s3;
    }
    Student s4;
s1.show();
}


