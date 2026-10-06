#include<iostream>
using namespace std;
class Shape
{
public:
    virtual void area()
    {
        cout<< "area of shape";
    }
};
class Rectangle:public Shape
{
    int length,breadth;
    
public:
     void area()
     {
         cout<< "Enter length";
         cin>> length;
         
         cout<<"Enter breadth:";
         cin>>breadth;
         
         cout<<"area of rectangle="<<length*breadth;
      }
};
int main(){
    Shape *s;
    Rectangle r;
    
    s=&r;
    s->area();
    return 0;
}
