#include<iostream>
using namespace std;
class Complex
{
 int real,imag;
 
public:
 Complex(int r, int i)
 {
   real=r;
   imag=i;
}
Complex operator+(Complex c)
{
Complex temp(0,0);
temp.real= real + c.real;
temp.imag= imag + c.imag;

return temp;
}

void display()
{
cout<<"complex number="<<real<<"+"<<imag<<"i";
}
};
int main()
{
Complex c1(10,20);

Complex c2(5,10);

Complex c3=c1+c2;
c3.display();
return 0;
}
