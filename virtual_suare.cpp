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
class Square:public Shape
{
    int side;
    
public:
     void area()
     {
         cout<< "Enter side";
         cin>> side;
         
         
         cout<<"area of Square="<<side*side;
      }
};
int main(){
    Shape *s;
    Square sq;
    
    s=&sq;
    s->area();
    return 0;
}
