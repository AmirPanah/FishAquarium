// animation.cpp


#include <iostream>
#include <windows.h>
#include <conio.h>

using namespace std;

void gotoxy(int x, int y){
  COORD coord;
  coord.X = x;
  coord.Y = y;
  SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

void loading() {

system("cls");
cout << "Loading. ";
Sleep(1000); // delay  1 second
system("cls");
cout << "Loading.. ";
Sleep(1000);
system("cls");
cout << "Loading... ";
Sleep(1000);
system("cls");
cout << "Loading.... ";
Sleep(1000);
system("cls");
cout << "Loading..... ";
Sleep(1000);
system("cls");
cout << "Loading...... ";
Sleep(1000);
system("cls");
cout << "Loading....... ";
Sleep(1000);
system("cls");
cout << "Loading........ ";

system("cls");


}

int main() {

    system("cls"); //clear the screen
    loading();
    system("cls");
    gotoxy(18,1); cout << "FISH ANIMATION";
    gotoxy(13,2); 
    // loop thru left to right direction"
    for(int a =1; a<50; a=a+2){
        gotoxy(a,3); //Move to Special Position
        cout << "~^";
    }
    //loop thru top to bottom direction
    for(int a =1; a<20; a++){
        gotoxy(49,a);
        cout << "||";
    }
    //loop thru right to left direction
    for(int a =48; a>0; a--){

        gotoxy(a,19);
        cout << "=";
    }
    //loop thru bottom to top direction
    for(int a = 19; a>0; a--){

        gotoxy(0,a);
        cout << "||";
    }

    int time=0;
    while(time <= 10){
    //go
    for(int a =3; a<40; a++){

    //fish 1
        Sleep(100);
        gotoxy(a,6); //Move to Special Position
        cout << "   __";
        gotoxy(a,7);
        cout << " \\/ o\\";
        gotoxy(a,8);
        cout << " /\\__/";
        gotoxy(a,9);
        cout << "     ";

        gotoxy(45-a-2,13);
        cout << "   ,    ";
        gotoxy(45-a-2,14);
        cout << " <' (=< ";
        gotoxy(45-a-2,15);
        cout << "   '    ";
        gotoxy(45-a-2,16);
        cout << "        ";


    }

    for(int a =40; a>3; a--){
        Sleep(100);
        gotoxy(a,6);
        cout << "  __     ";
        gotoxy(a,7);
        cout << " /o \\/  ";
        gotoxy(a,8);
        cout << " \\__/\\ ";
        gotoxy(a,9);
        cout << "         ";

        gotoxy(3+40-a,13);
        cout << "    '   ";
        gotoxy(3+40-a,14);
        cout << " >=) '> ";
        gotoxy(3+40-a,15);
        cout << "    '   ";
        gotoxy(3+40-a,16);
        cout << "        ";
    }
    time++;
    }

    getch();
    system("cls");
return 0;
}
