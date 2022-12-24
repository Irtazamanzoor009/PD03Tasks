#include<iostream>
using namespace std; 
int main()
{
string name;
float subject_1;
float subject_2;
float subject_3;
float subject_4;
float subject_5;
float sum;
float percentage;

cout<<"Enter your name: ";
cin>>name;

cout<<"Enter subject 01 marks: ";
cin>>subject_1;

cout<<"Enter subject 02 marks: ";
cin>>subject_2;

cout<<"Enter subject 03 marks: ";
cin>>subject_3;

cout<<"Enter subject 04 marks: ";
cin>>subject_4;

cout<<"Enter subject 05 marks: ";
cin>>subject_5;

sum = subject_1 + subject_2 + subject_3 + subject_4 + subject_5;

percentage = (sum*100)/500;

cout<<"Your Percentage: "<<percentage<<endl;






}