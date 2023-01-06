#include<bits/stdc++.h>
using namespace std;
class person{
    public:
        string name;
        person *father,*mother;
        void print_info()
        {
            cout<<"Name-->"<<name<<"\n";
            cout<<"Fathers name-->"<<p.father->name<<"\n";
            cout<<"Mothers name-->"<<p.mother->name<<"\n";
        }
};
int main()
{
    person p;
    p.name="Rifa";
    
    p.father=new person;
    p.mother=new person;
    
    p.father->name="X";
    p.mother->name="Y";

}