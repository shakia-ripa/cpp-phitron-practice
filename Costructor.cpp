#include<bits/stdc++.h>
using namespace std;
class student{
    public:
        string name;
        int id;
        double gpa;
        string father_name;
        string mother_name;

    //constructor
    student(string name,int id,double gpa,string father_name,string mother_name)
    {
        this->name=name;
        this->id=id;
        this->gpa=gpa;
        this->father_name=father_name;
        this->mother_name=mother_name;
        cout<<"Constructor Called"<<endl;

    }
    student(string name,int id,double gpa)
    {
        this->name=name;
        this->id=id;
        this->gpa=gpa;
        cout<<"Constructor Called"<<endl;
    }
    student()
    {
        cout<<"Constructor Called"<<endl;
    }
    ~student()
    {
        cout<<"Destructor Called"<<endl;
        print_info();
    }
    void print_info()
    {
        cout<<name<<" "<<id<<" "<<gpa<<" "<<father_name<<" "<<mother_name<<endl;
    }
};
int main()
{
    student S1("Rifa",07,4.58);
    S1.print_info();
    student S2("Shakia",45,4.72,"X","y");
    S2.print_info();
    student S3;
    return 0;
}