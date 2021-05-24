//Program on Abstract Class
#include<iostream>
 using namespace std;

class shape           // abstract baseclass//
{
public:
    virtual void numberofsides()=0;  // pure virtual function//
};


class trapezoid:public shape
{
public:                             
    void numberofsides()
    {
        cout<<"No: of Sides in Trapezoid = 4"<<endl;
    }
};

class triangle:public shape
{
public:                                                     // three classes are inherited using class "shape" //
    void numberofsides()
    {
        cout<<"No: of Sides in Triangle = 3"<<endl;
    }
};

class hexagon:public shape
{
public:
    void numberofsides()
    {
        cout<<"No: of Sides in Hexagon = 6"<<endl;
    }
};

int main()
{
    shape *s1;
    shape *s2;
    shape *s3;
    trapezoid t1;
    triangle t2;
    hexagon h1;
    s1=&t1;
    s2=&t2;
    s3=&h1;
    s1->numberofsides();              // using numberofsides() function//
    s2->numberofsides();
    s3->numberofsides();
    return 0;
}
