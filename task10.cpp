#include<iostream>
using namespace std;

void price(float discount,int ticket,string name);


main()
{
while(true)
{
 string name;
 int ticket;
 float discount;
 cout<<"Enter Your Destination:"<<endl;
 cin>>name;
 cout<<"Enter Price of the ticket $=";
 cin>>ticket;

 price(discount,ticket,name); 
}
}

void price(float discount,int ticket,string name)

{
 if(name=="pakistan")
 {
  discount=0.05;
  ticket=ticket-ticket*discount;
  cout<<"Your Ticket Price after Discount="<<ticket;
  }
 
 if(name=="ireland")
  {
   discount=0.10;
   ticket=ticket-ticket*discount;
   cout<<"Your Ticket Price after Discount="<<ticket;
  }
  if(name=="india")
  {
   discount=0.20;
   ticket=ticket-ticket*discount;
   cout<<"Your Ticket Price after Discount="<<ticket;
  }
  if(name=="england")
  {
   discount=0.30;
   ticket=ticket-ticket*discount;
   cout<<"Your Ticket Price after Discount="<<ticket;
  }
   if(name=="canada")
  {
   discount=0.45;
   ticket=ticket-ticket*discount;
   cout<<"Your Ticket Price after Discount="<<ticket;
  }
}



