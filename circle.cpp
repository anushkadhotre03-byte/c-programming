#include<iostream>
using namespace std;
class circle{
private: 
  double radius;
  
public:
  void accept(){
  cout<<"enter the radius";
  cin>>radius;
  }
  
  void display(){
  double area= 3.14* radius*radius;
  double circum= 2*3.14*radius;
  
  cout<<"area:"<<area<<endl;
  cout<<"circum:"<<circum<<endl;
  }
  };
  
  
  int main() 
  {
       circle c;
       c.accept();
       c.display();
       return 0;
       }
