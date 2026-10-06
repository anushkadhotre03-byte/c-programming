#include<iostream>
using namespace std;
class Number
{
 int x;
 
public:
 Number(int a)
 {
   x=a;
}
void operator++()
{
x=x+1;
}
void display()
{
cout<<"value="<<x;
}
};
int main()
{
Number n(10);
++n;
n.display();
return 0;
}
