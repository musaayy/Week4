#include <iostream>
#include <windows.h>

using namespace std;

void menu();
void gotoxy(int, int);

main()
{
    int option;
    string nm1, nm2, temp;
    float mtMarks1,interMarks1,eMarks1,mtMarks2,interMarks2,eMarks2;
    float p1,p2,p3,agg1,agg2;
    while(true)
 {
     menu();
     cout <<"Enter your option : ";
     cin >>option;
   if(option == 1)
      {
        cout << "Enter the name of the Student: ";
        cin >> nm1;
        cout << "Enter the matric marks: ";
        cin >> mtMarks1;
        cout << "Enter the intermediate marks: ";
        cin >> interMarks1;
        cout << "Enter the ecat marks: ";
        cin >> eMarks1;
        cout << "Enter f to continue"<< endl;
        cin >> temp;
       }
    if(option == 2)
      {
        cout << "Enter the name of the Student: ";
        cin >> nm2;
        cout << "Enter the matric marks: ";
        cin >> mtMarks2;
        cout << "Enter the intermediate marks: ";
        cin >> interMarks2;
        cout << "Enter the ecat marks: ";
        cin >> eMarks2;
        cout << "Enter f to continue"<< endl;
        cin >> temp;
      }
     if(option == 3)
      {
        p1 = (mtMarks1 / 1100) * 30;
        p2 = (interMarks1 / 550) * 30;
        p3 = (eMarks1 / 400) * 40;
        agg1 = p1 + p2 + p3;
        cout << "The student " << nm1 << " has aggregate " << agg1 << endl;
        cout << "Enter f to continue" << endl;
        cin >> temp;
      }
     if(option == 4)
      {
        p1 = (mtMarks2 / 1100) * 30;
        p2 = (interMarks2 / 550) * 30;
        p3 = (eMarks2 / 400) * 40;
        agg2 = p1 + p2 + p3;
        cout << "The student " << nm2 << " has aggregate " << agg2 << endl;
        cout << "Enter f to continue" << endl;
        cin >> temp;
      }
     if(option == 5)
      {
        if(agg1 > agg2)
         {
            cout << nm1 << " will have the 1st roll no." << endl;
         }
        if(agg2 > agg1)
         {
             cout << nm2 << " will have the 1st roll no." << endl;
         }
         cout << "Press enter to continue" << endl;
         cin >> temp;
     }
  }   
}

void menu()
{
 system("cls");
 gotoxy(20, 8);
 cout << "******************************************";
 gotoxy(20, 9);
 cout << "*    Uet Lahore Administration System    *";
 gotoxy(20, 10);
 cout << "******************************************";
 gotoxy(17, 15);
 cout << "Welcome to UET Administration Management System";
 cout << endl << endl << endl;
 cout << "Press 1 to enter the details of the 1st student" << endl;
 cout << "Press 2 to enter the details of the 2nd student" << endl;
 cout << "Press 3 to calculate the agg of the 1st student" << endl;
 cout << "Press 4 to calculate the aggregate of the 2nd student" << endl;
 cout << "Press 5 to display the student with Roll No. 1" << endl;

}

void gotoxy(int x, int y)
{
 COORD coordinates;
 coordinates.X = x;
 coordinates.Y = y;
 SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}