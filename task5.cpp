#include<iostream>
using namespace std;
int main()
{
float loose_weight;
float walk;

cout<<"Enter weight that you want to loose: ";
cin>> loose_weight;

//loose 1 kg weight after 15 days.

walk= loose_weight * 15;

cout<<"It will take you " <<walk<< " days to loose " << loose_weight<<" KGs";
}