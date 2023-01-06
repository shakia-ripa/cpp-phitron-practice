#include<bits/stdc++.h>
using namespace std;
class student{
    public:
    string name;
    int id;
    double gpa;
    string F_name;
    string M_name;
    student()
    {

    }
    student(string name,int id,double gpa)
    {
        this->name=name;
        this->id=id;
        this->gpa=gpa;

    }
    void input()
    {
        cin>>name>>id>>gpa;
    }
    void print_info()
    {
        cout<<name<<"\n"<<id<<"\n"<<gpa<<"\n";
    }
};
int main()
{
    int i;
    vector<student>s;
    for(i=0;i<3;i++)
    {
        string s;
        int id;
        double gpa;
        cin>>s>>id>>gpa;
        s.push_back(s,id,gpa);
    }
    for(i=0;i<3;i++)
    {
        s[i].print_info();
    }
    return 0;
}