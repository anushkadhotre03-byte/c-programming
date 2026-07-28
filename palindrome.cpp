#include<iostream>
using namespace std;
int main()
{
int a, rev, temp;
cout<<"enter a number:";
cin>>a;
temp=a;
while(a >0){

rev = rev * 10 + a%10;
a /= 10;
}
cout<<rev ;
if(rev==temp)
cout<<"the no. is palindrome";
else
cout<<"not palindrome ";
}
