#include<iostream>
using namespace std;
class rectangle{
private:
double length;
double width;

public:
rectangle(): length(1.0), width(1.0){}

rectangle(double len,double wid):length(len),width(wid){}
~rectangle(){
cout<<"rectangle object destroyed."<<endl;
}

double getlength() const{
return length;
}

double getwidth() const{
return width;
}

void setlength(double len){
length= len;
}
void setwidth(double wid){
width=wid;
}

double calculatearea() const{
return length*width;
}

double calculateperimeter() const{
return 2*(length+width);
}
};

int main()
{
rectangle rect(4,40);
cout<<"rectangle properties"<<endl;
cout<<"length"<<rect.getlength()<<endl;
cout<<"width"<<rect.getwidth()<<endl;
cout<<"area"<<rect.calculatearea()<<endl;
cout<<"perimeter"<<rect.calculateperimeter()<<endl;
return 0;
}
