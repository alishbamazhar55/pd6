#include <iostream>
using namespace std;
main()
{
    int size;
    int x;
    int y;
    int x_range;
    int y_range;
     int x_range1;
    int y_range1;
    cout << "enter size(h): ";
    cin >> size;
    cout << "enter x coordinate: ";
    cin >> x;
    cout << "enter y coordinate: ";
    cin >> y;
    x_range=size*3;
    y_range=size*4;
    
    if(x < x_range && y <  size)
    {
        cout << "inside";
    }
    else if ((x>size && x<2*size) &&(y>size && y <y_range))
    {
        cout << "inside";
    }
      else if (x < size && y>size) 
      {
        cout << "outside";
      }
      else if (x < x_range && y >y_range)
      {
        cout << "outside";
      }
      else if (x>2*size && y > size)
      {
        cout << "outside";
      }
      else{
        cout << "border";
      }
}