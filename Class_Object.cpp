//Class:- A class is template from which individual object can be created.
//Object:- Any class type variable is called an object.
//we can also add funtions in a class.....

#include<bits/stdc++.h>
using namespace std;
class student{
    public:
    string name;
    int id;
    double gpa;
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
    student Rifa,Nahian,Mawa;
    cout<<"Enter all the students information respectively:"<<endl;
    Rifa.input();
    Nahian.input();
    Mawa.input();
    Rifa.print_info();
    Nahian.print_info();
    Mawa.print_info();
    return 0;
}