#include<iostream>
using namespace std;
int main()
{
string movie_name;
float adultTicketPrice;
float ChildTicketPrice;
float NoOfAdultTickSold;
float NoOfChildTickSold;
float percentage;

cout<<"Enter Movie Name: ";
cin>>movie_name;

cout<<"Enter adult Ticket Price: ";
cin>>adultTicketPrice;

cout<<"Enter child Ticket Price: ";
cin>>ChildTicketPrice;

cout<<"Enter no. of adult tickets sold: ";
cin>> NoOfAdultTickSold;

cout<<"Enter no. of child tickets sold: ";
cin>>NoOfChildTickSold;

cout<<"Enter percentage amount to be donated: ";
cin>>percentage;

float earning_from_adult_tickets = adultTicketPrice * NoOfAdultTickSold;

float earning_from_child_tickets = ChildTicketPrice * NoOfChildTickSold;

float total_earnings = earning_from_adult_tickets + earning_from_child_tickets;

float amount_donated = total_earnings * percentage/100;

float amount_left = total_earnings - amount_donated;

cout<<"____________________________________________________________________\n";

cout<<"Total amount generated: "<<total_earnings<<endl;
cout<<"Amount after donation: "<<amount_left<<endl;
}