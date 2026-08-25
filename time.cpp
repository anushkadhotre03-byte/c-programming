#include<iostream>
using namespace std;
 clas time
 {
 int h,m,s;
  public:
    void accept()
    {
    cout<<"enter hours:";
    cin>>h;
    
    cout<<"enter minutes:";
    cin>>m;
    
    cout<<"enter seconds"
    cin>>s;
    }
     void add(time t)
     {
     int sh, sm, ss;
     sm= m+ t.m;
     sh= h+ t.h;
     
     if(ss>=60)
     {
     ss= ss-60;
     sm++;
     }
     
     if(sm>=60)
     {
     sm=sm-60;
     sh++;
     }
     cout<<"result="<<<<sh<<":"<<sm<<":"<<ss;
     }};
     int main()
     {
     time t1 ,t2;
     t1.accept()
     t2.accept()
     t1.add(t2);
     return 0;
     }
     

