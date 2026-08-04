#include<iostream>
using namespace std;
 class greatest{
   private:
   int n1,n2;
   
   public:
     void input(){
        cout<<"enter 1st no:";
        cin>>n1;
        cout<<"enter 2nd no:";
        cin>>n2;
        }
        
     void output(){
          if(n1>n1){
             cout<<"the greatest no. is"<<n1<<endl;
             }else if(n2>n1){
             cout<<"the greatest no. is"<<n2<<endl;
             }else{
              cout<<"both are equal"<<endl;
              }
              }
              };
      int main(){
      greatest obj;
      obj.input();
      obj.output();
      return 0;
      }
