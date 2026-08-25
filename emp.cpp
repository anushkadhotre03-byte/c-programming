#include<iostream>
using namespace std;
class employee
{
 int empld;
 string name;
 float salary;
 
 public:
 
 employee()
 {
   empld=0;
   name="unknown";
   salary=0;
 }
 employee(int id,string n, float s)
 {
   empld=id;
   name=n;
   salary=s;
 }
employee(const employee &e)
 {
  empld = e.empld;
  name = e.name;
  salary = e.salary;
 }
void display()
 { 
  cout<<"employee id:"<<endl;
  cout<<"name:"<<name<<endl;
  cout<<"salary:"<<salary<<endl;
  cout<<"------"<<endl;
 }
};
 int main()
 {
  employee e1;
  cout<<"default contructor:"<<endl;
  e1.display();
  
  employee e2(40,"Anushka",50000);
  cout<<"parameterized constructor:"<<endl;
  e2.display();
  
  employee e3(e2);
  cout<<"copy constructor:"<<endl;
  e3.display();
  
  return 0;
 }
