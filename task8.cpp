
#include<iostream>
using namespace std;
void even(int a,int b);
main()
{
int a,b;

cout<<"Enter 1st number:";
cin>>a;
cout<<"Enter 2nd number:";
cin>>b;
even(a,b);
}


void even(int a,int b)
{
 if(a==b)
{
 cout<<"True";
}

if(a!=b)
{
 cout<<"False";
}
}