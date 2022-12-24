#include<iostream>
using namespace std;
int main()
{
int num;
cout<<"Enter four digits number: ";
cin>>num;

int mod1 = num % 10;
cout<<mod1<<endl;

int number1 = num/10;
int mod2 = number1 % 10;
cout<<mod2<<endl;

int number2 = num/100;
int mod3 = number2 % 10;
cout<<mod3<<endl;

int number3 = num/1000;
int mod4 = number3 % 10;
cout<<mod4<<endl;

int sum = mod1 + mod2 + mod3 + mod4;

cout<<"Sum is "<<sum<<endl;






}