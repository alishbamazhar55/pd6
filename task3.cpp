#include <iostream>
using namespace std;
string sign(int date, string month);
main()
{
    string month;
    int date;
    string result;
    cout << "enter month";
    cin >> month;
    cout << "enter date";
    cin >> date;
    result = sign(date, month);
    cout << result;
}
string sign(int date, string month)
{
    string symbol;
    if ((month=="march"&&date>=21)|| (month=="april"&& date<=19))
    {
        symbol = "Aries";
    }
     if ((month=="april"&&date>=20)|| (month=="may"&& date<=20))
    {
        symbol = "Taurus";
    }
     if ((month=="may"&&date>=21)|| (month=="june"&& date<=20))
    {
        symbol = "Gemini";
    }
     if ((month=="june"&&date>=21)|| (month=="july"&& date<=22))
    {
        symbol = "Cancer";
    }
     if ((month=="july"&&date>=23)|| (month=="august"&& date<=22))
    {
        symbol = "Leo";
    }
     if ((month=="august"&&date>=23)|| (month=="september"&& date<=22))
    {
        symbol = "Virgo";
    }
     if ((month=="september"&&date>=23)|| (month=="october"&& date<=22))
    {
        symbol = "Libra";
    }
     if ((month=="october"&&date>=23)|| (month=="november"&& date<=21))
    {
        symbol = "scorpio";
    }
     if ((month=="november"&&date>=22)|| (month=="december"&& date<=21))
    {
        symbol = "sagittarius";
    }
     if ((month=="december"&&date>=22)|| (month=="january"&& date<=19))
    {
        symbol = "capricorn";
    }
     if ((month=="january"&&date>=20)|| (month=="february"&& date<=18))
    {
        symbol = "aquarius";
    }
     if ((month=="febuary"&&date>=19)|| (month=="march"&& date<=20))
    {
        symbol = "pisces";
    }
    return symbol;
}