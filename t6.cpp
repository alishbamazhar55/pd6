#include <iostream>
using namespace std;

main()
{
    string month;
    int stay;
    float discount;
    float final_studio;
    float final_apartment;
    float discount2;
    float studio;
    float apartment;
    cout << "enter month";
    cin >> month;
    cout << "enter stay";
    cin >> stay;
     if (month=="may" || month=="october") 
    {
        studio=stay*50;
        apartment=stay*65;
        if (stay > 7 && stay < 14)
        {
        discount=studio*0.05;
        final_studio=studio-discount;
        }
        else if (stay >=14)
        {
            discount=studio*0.3;
            final_studio=studio-discount;
            discount2=apartment*0.1;
            final_apartment=apartment-discount2;
        }
    }
   else if (month=="june" || month=="september") 
    { 
        studio=stay*75.20;
        apartment=stay*68.70;
        if (stay <=14)
        {
            final_studio=studio;
            final_apartment=apartment;
        }
        if (stay>14)
        {
        discount=studio*0.2;
        final_studio=studio-discount;
        discount2=apartment*0.1;
        final_apartment=apartment-discount2;
        }
    }
   else if (month=="july" || month=="august") 
    { 
         studio=stay*76.0;
        apartment=stay*77.0;
       if (stay >=14)
       {
  final_studio=studio;
        discount2=apartment*0.1;
        final_apartment=apartment-discount2;
        }
        
    } 
    cout << "studio"<<final_studio << "$"<< endl;
    cout << "apartment" << final_apartment << "$"<< endl;
    
}