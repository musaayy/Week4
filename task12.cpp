#include<iostream>
using namespace std;


void flower(float total,float pred,float pwhite,float ptulips,float red,float tulips,float white);


main()
{ 
float total;
float pred,pwhite,ptulips;
float red=2.0,white=4.10,tulips=2.5;

cout<<"Enter the number of red roses";
cin>>pred;
cout<<"Enter the number of white roses";
cin>>pwhite;
cout<<"Enter the number of tulips roses";
cin>>ptulips;
flower(total,pred,pwhite,ptulips,red,tulips,white);
}



void flower(float total,float pred,float pwhite,float ptulips,float red,float tulips,float white)
{
 total=pred*red+pwhite*white+ptulips*tulips;
if(total>200)
 {
  total=total-total*0.20;
  cout<<"Your Discounted Price is="<<total;

 }
  cout<<"Your Total="<<total;
}
