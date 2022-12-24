#include<iostream>
using namespace std;
int main()
{
float bag_size;
float cost_bag;
float area_covered;
float costFertPerPound;
float areaCoverByBag;

cout<<"Enter bag size in pounds: ";
cin>>bag_size;

cout<<"Enter cost of the bag: ";
cin>>cost_bag;

cout<<"Enter area covered by each bag in square feet: ";
cin>>area_covered;

costFertPerPound = (cost_bag)/(bag_size);

areaCoverByBag = cost_bag / area_covered;

cout<<"_____________________________________________________________________\n";

cout<<"Cost of the fertilizer per pound: "<<costFertPerPound<<endl;
cout<<"Cost of fertilizing the area per square feet: "<<areaCoverByBag<<endl;
}