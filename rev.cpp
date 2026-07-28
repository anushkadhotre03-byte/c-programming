#include<iostream>
using namespace std;
int main()
{
int a, rev=0;
cout<<"enter n natural no.";
cin>>a;
while(a != 0){
int rem = a % 10;
rev = rev * 10 +rem;
a /= 10;
}
cout << rev ;
return 0;

}
