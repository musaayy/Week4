#include<iostream>
#include<windows.h>

using namespace std;
void m(int x,int y);
void u();
void s();
void a();
void gotoxy(int x,int y);

main()
{
system("cls");
int x,y;
gotoxy(x=30,y=0);
m(x,y);
u();
s();
a();
}


void m(int x,int y) 
{
if(x=30,y=8)
{int x,y; 
gotoxy(x+1,y+1);
cout<<"###           ###"<<endl ;
gotoxy(30,1);
cout<<" ###         ### " <<endl ;
cout<<" #  ##      #   #" <<endl ;
cout<<" #    #    #    #" <<endl ;
cout<<" #     #  #     #" <<endl ;
cout<<" #      ##      #" <<endl ;
cout<<" #              #" <<endl ;
cout<<"###            ###" <<endl ;
}
}


void u()
{
cout<<"##     ##"<<endl  ;
cout<<"##     ##" <<endl ;
cout<<"##     ##" <<endl ;
cout<<"##     ##" <<endl ;
cout<<"##     ##" <<endl ;
cout<<"##     ##" <<endl ;
cout<<"##     ##" <<endl ;
cout<<"#########" <<endl ;
}


void s()
{


cout<<" #######"<<endl  ;
cout<<"###" <<endl ;
cout<<" ###" <<endl ;
cout<<"   ###" <<endl ;
cout<<"    ###" <<endl ;
cout<<"     ###" <<endl ;
cout<<"######" <<endl ;
}

void a()
{

cout<<"     ###"<<endl  ;
cout<<"    ## ##" <<endl ;
cout<<"   ##   ##" <<endl ;
cout<<"   ##   ##" <<endl ;
cout<<"   #######" <<endl ;
cout<<"   ##   ## " <<endl ;
cout<<"   ##   ##" <<endl ;
cout<<"   ##   ##" <<endl ;
}






void gotoxy(int x,int y)
{
 COORD coordinates;
 coordinates.X=x;
 coordinates.Y=y;
 SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coordinates);
}












