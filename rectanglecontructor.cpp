#include<iostream>
using namespace std;
class rectangle{
int length , breadth;

public:

rectangle()
{
length=0;
breadth=0;
}
 rectangle(int l, int b)
 {
 length= l;
 breadth= b;
 }
 rectangle(const rectangle &r)
 {
 length= r.length;
 breadth= r.breadth;
 }
 void area()
   {
     cout<<"area="<<length*breadth<<endl;
   }
};  
  
  int main()
  {
   rectangle r1;
   cout<<"default constructor:";
   r1.area();
  
   rectangle r2(10,5);
   cout<<"parameterized constructor:";
   r2.area();
  
   rectangle r3(r2);
   cout<<"copy constructor:";
   r3.area();
  
  return 0;
  }
