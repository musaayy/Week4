#include<iostream>
using namespace std;
void input(string a);

main()
{

string a;
cout<<"Input Funtion:";
cin>>a;
input(a);


}


void input(string a)
{

if(a=="true")
 { 
  cout<<"Output is False";
 }
if(a=="false")
 {
  cout<<"Output is True";
 }
}