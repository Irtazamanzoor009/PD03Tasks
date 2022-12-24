#include<iostream>
using namespace std;
int main()
{
int num1, num2, num3, num4, num5;

cout<<"Enter 1st number: ";
cin>>num1;
cout<<"Enter 2nd number: ";
cin>>num2;
cout<<"Enter 3rd number: ";
cin>>num3;
cout<<"Enter 4th number: ";
cin>>num4;
cout<<"Enter 5th number: ";
cin>>num5;

int sum1 = num1 + num2 + num3 + num4 + num5;

int num6, num7, num8, num9, num10;

cout<<"Enter 6th number: ";
cin>>num6;
cout<<"Enter 7th number: ";
cin>>num7;
cout<<"Enter 8th number: ";
cin>>num8;
cout<<"Enter 9th number: ";
cin>>num9;
cout<<"Enter 10th number: ";
cin>>num10;

int multiply = num6 * num7 * num8 * num9 * num10;

int num11, num12, num13, num14, num15;

cout<<"Enter 11th number: ";
cin>>num11;
cout<<"Enter 12th number: ";
cin>>num12;
cout<<"Enter 13th number: ";
cin>>num13;
cout<<"Enter 14th number: ";
cin>>num14;
cout<<"Enter 15th number: ";
cin>>num15;

int subtract = num11 - num12 - num13 - num14 - num15;

int result = (sum1 + multiply) - subtract;

cout<<"Result is: "<< result<<endl;




}