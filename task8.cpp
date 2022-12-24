#include<iostream>
using namespace std;
int main()
{
float coins_vege;
float coins_fruits;

int kgs_vege;
int kgs_fruits;

cout<<"Enter price of vegetabels per kilogram: ";
cin>>coins_vege;

cout<<"Enter price of fruits per kilogram: ";
cin>>coins_fruits;

cout<<"Enter kilograms of vegetables sold: ";
cin>>kgs_vege;

cout<<"Enter kilograms of fruits sold: ";
cin>>kgs_fruits;

float earnings_of_vege = coins_vege * kgs_vege;
cout<<"Total earnings of vegetables is: "<<earnings_of_vege<<endl;

float earnings_of_fruits = coins_fruits * kgs_fruits;
cout<<"Total earnings of Fruits is: "<<earnings_of_fruits<<endl;

float total_earnings = earnings_of_vege + earnings_of_fruits;

float in_rupees = total_earnings / 1.94;

cout<<"Total Earnings: "<<in_rupees<<endl;
}