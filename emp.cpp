#include<iostream>
using namespace std;

class employee{
private:
 int id;
 string name;
 double salary;
 }
public:
 void accept(){
    cout<<"enter employee id:";
    cin>>id;
    
   cout<<"enter employee name";
   getline(cin, name);
   
   cout<<"enter employee salary:";
   cin>>salary;
   }
   void display()
   {
   cout<<"employee info."<<endl;
   cout<<"employee id:"<<id<<endl;
   cout<<"employee name:"<<name<<endl;
   
   cout<<"employee salary:"<<salary<<endl;
   }
   int main(){
   
   employee emp;
   emp.accept();
   emp.display();
   return 0;
   }
   
