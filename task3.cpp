#include<iostream>
using namespace std;
int main()
{
float init_velocity;
float acc;
float time;
float final_velocity;

cout<<"Enter initial velocity: ";
cin>> init_velocity;

cout<<"Enter Acceleration: ";
cin>>acc;

cout<<"Enter time: ";
cin>>time;

final_velocity = (acc*time) + init_velocity;

cout<<"Final Velocity: "<<final_velocity<<endl;

}