#include <iostream>
#include <windows.h>
void printMaze();
void gotoxy(int x ,int y);
void clear(int x , int y , char previous);
void showPacMan(int  x , int y);
void showGhost(int x,int y);
char getCharAtxy(short int x ,short int y);
using namespace std;
void printMaze()
{
    cout << "%%%%%%%%%%%%%%%%% " << endl;
    cout << "%               % " << endl;
    cout << "%               % " << endl;
    cout << "%               % " << endl;
    cout << "%               % " << endl;
    cout << "%               % " << endl;
    cout << "%               % " << endl;
    cout << "%               % " << endl;
    cout << "%               % " << endl;
    cout << "%               % " << endl;
    cout << "%               % " << endl;
    cout << "%%%%%%%%%%%%%%%%% " << endl;
}
  char getCharAtxy(short int x, short int y)
{
    CHAR_INFO ci;
    COORD xy={0,0};
    SMALL_RECT rect={x,y,x,y};
    COORD coordBufSize;
    coordBufSize.X=1;
    coordBufSize.Y=1;
    return ReadConsoleOutput(GetStdHandle(STD_OUTPUT_HANDLE), &ci , coordBufSize , xy , &rect)? ci.Char.AsciiChar : ' ';
}
void gotoxy(int x ,int y)
{
   COORD coordinates;
   coordinates.X=x;
   coordinates.Y=y;
   SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coordinates);
}
void clear(int x,int y,char previous)
{
    gotoxy(x ,y);
    cout << previous;
}
void showGhost (int x ,int y)
{
    gotoxy(x,y);
    cout << "G";

}
main()
{
    int gx =1;
    int gy = 1;
    string direction = "right";
    char previousChar = ' ';
    system ("cls");
    printMaze();
    showGhost(gx,gy);
    while (true)
{
    Sleep(100);
   if(direction=="right")
   {
    char nextLocation = getCharAtxy (gx +1 ,gy);
    if (nextLocation == '%')
    {
        direction ="left";
    }
    else if (nextLocation == ' ' || nextLocation == '.')
    {
        clear(gx,gy,previousChar);
        gx=gx+1;
        previousChar = nextLocation;
        showGhost(gx,gy);
    }
   }
   if(direction=="left")
   {
    char nextLocation = getCharAtxy (gx - 1 ,gy);
    if (nextLocation == '%')
    {
        direction ="right";
    }
    else if (nextLocation == ' ' || nextLocation == '.')
    {
        clear(gx,gy,previousChar);
        gx= gx- 1;
        previousChar = nextLocation;
        showGhost(gx,gy);
    }
   }
 }
}