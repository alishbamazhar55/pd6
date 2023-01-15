#include <iostream>
using namespace std;
string activity(string temperature,string humidity);
main()
{
    string temperature;
    string humidity;
    string result;
    cout << "enter temperature";
    cin >> temperature;
    cout << "enter humidity";
    cin >> humidity;
     result=activity (temperature , humidity);
      cout << result;
}
string activity(string temperature,string humidity)
{
    string total;
    if (humidity=="dry"&& temperature=="warm")
    {
      total="play tennis";
    }
    else if (humidity=="humid" && temperature=="warm")
    {
        total="swim";
    }
    else if (humidity=="dry" && temperature=="cold")
    {
        total="play basketball";
    }
    else if (humidity=="humid" && temperature=="cold")
    {
        total="watch tv";
    }
    return total;
}
