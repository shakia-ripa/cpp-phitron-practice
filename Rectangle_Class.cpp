#include<bits/stdc++.h>
using namespace std;
class Rectangle{
    public:
        double height;
        double width;
    void take_input()
    {
        cin>>height>>width;
    }
    double Area()
    {
        return height*width;
    }
    double Perimeter()
    {
        return 2*(height+width);
    }
    void print()
    {
        cout<<"Area-->"<<Area()<<"\n"<<"Perimeter-->"<<Perimeter()<<endl;
    }
};
int main()
{
    Rectangle r1,r2;
    cout<<"Enter the height & width of r1:-";
    r1.take_input();
    r1.print();
    cout<<"Enter the height & width of r2:-";
    r2.take_input();
    r2.print();
    return 0;
 }