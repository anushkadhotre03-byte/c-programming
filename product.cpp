#include<iostream>
using namespace std;
class product{
int producid;
string name;
float price;
int quantity;
  
 public:
 
 product()
 {
 producid =0;
 name= "unknown";
 price=0;
 quantity=0;
 }
  product(int id, string n, int p, int q)
  {
  producid =id;
  name= n;
  price= p;
  quantity=q;
  }
  product(const product &s)
  {
  producid =s.producid;
  name=s.name;
  price=s.price;
  quantity=s.quantity;
 }
 void display()
 { 
  cout<<"productid:"<<endl;
  cout<<"name:"<<name<<endl;
  cout<<"price:"<<price<<endl;
  cout<<"quantity"<<quantity<<endl;
 }
};
 int main()
 {
  product s1;
  cout<<"default contructor:"<<endl;
  s1.display();
  
  product s2(40," anushka",50000 ,10);
  cout<<"parameterized constructor:"<<endl;
  s2.display();
  
  product s3(s2);
  cout<<"copy constructor:"<<endl;
  s3.display();
  
  return 0;
 }

