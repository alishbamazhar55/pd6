#include <iostream>
using namespace std;
float bill(char code, int minutes, char time);
main()
{
    char code; // r p
    char time; //d n
    int minutes;// anything
    float result;

    cout << "enter which type of customer you are (residential or premium) select (r/p): ";
    cin >> code;
    cout << "(press D for day time or press N for night time) call:  ";
    cin >> time;
    cout << "enter number of minutes you used the service";
    cin >> minutes;

    result = bill(code, minutes, time);


    if (result != 0)
    {
        cout << "the charges are" << result << "$";
    }
    else
    {
        cout << "invalid";
    }
}
float bill(char code, int minutes, char time)
{
    
    float charge;

    if (time == 'd' && code == 'p')
    {
        if (minutes <= 75)
            charge = 25.00;
        else if (minutes > 75)
            charge = (0.10 * minutes) + 25.00;
    }

    else if (time == 'n' && code == 'p')
    {
        
        if (minutes <= 100)
            charge = 25.00;
          
        else if (minutes > 100)
            charge = (0.05 * minutes) + 25.00;
    }
    else if (code == 'r')
    {
        if (minutes <= 50)
            charge = 10.00;
        else if (minutes > 50)
            charge = (0.20 * minutes) + 10.0;
    }

    else
    {
        return 0;
    }

    return charge;
    
    
}