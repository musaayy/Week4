#include<iostream>
using namespace std;
void car(int speed);


main()
{
int speed;
cout<<"Enter speed of the car=";
cin>>speed;
car(speed);
}

void car(int speed)
{
if(speed>100)
 {
 cout<<"You will be CHALLENGED!!!";
 }
if(speed<=100)
 {
 cout<<"Perfect! You are going good.";
}
 }