#include <iostream>
using namespace std;
float price(string fruit, string day, float quantity);
main()
{
  string fruit;
  string day;
  float quantity;
  float result;
  cout << " enter fruit: ";
  cin >> fruit;
  cout << "enter day";
  cin >> day;
  cout << "enter quantity";
  cin >> quantity;
  result = price(fruit, day, quantity);
  if (result!=0)
  {
    cout << "price is "<< result;
  }
else{
  cout << "invalid";
}
}

float price(string fruit, string day, float quantity)
{
  float total;

  if (day == "monday" || day == "tuesday" || day == "wednesday" || day == "thursday" || day == "friday")
  {
    if (fruit == "banana")
    {
      total = 2.50 * quantity;
    }

    else if (fruit == "apple")
    {
      total = 1.20 * quantity;
    }

    else if (fruit == "orange")
    {
      total = 0.85 * quantity;
    }

    else if (fruit == "grapefruit")
    {
      total = 1.45 * quantity;
    }

    else if (fruit == "kiwi")
    {
      total = 2.70 * quantity;
    }

    else if (fruit == "pineapple")
    {
      total = 5.50 * quantity;
    }

    else if (fruit == "grapes")
    {
      total = 3.85 * quantity;
    }

   // return total;
  }
    

  else if (day == "saturday" || day == "sunday")
  {
    if (fruit == "banana")
    {
      total = 2.70 * quantity;
    }

    else if (fruit == "apple")
    {
      total = 1.25 * quantity;
    }

    else if (fruit == "orange")
    {
      total = 0.90 * quantity;
    }

    else if (fruit == "grapefruit")
    {
      total = 1.60 * quantity;
    }

    else if (fruit == "kiwi")
    {
      total = 3.00 * quantity;
    }

    else if (fruit == "pineapple")
    {
      total = 5.60 * quantity;
    }

    else if (fruit == "grapes")
    {
      total = 4.20 * quantity;
    }
  }

  else
  {
    return 0;
  }

return total;

 
}