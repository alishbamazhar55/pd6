#include <iostream>
using namespace std;
main()
{
  int starting_hour;
  int starting_min;
  int hour_arrival;
  int min_arrival;
  int paper_time;
  int arrival_time;
  cout << "enter exam starting time in hours";
  cin >> starting_hour;
  cout << "enter exam starting time in minutes";
  cin >> starting_min;
  cout << "enter time of arrival in hour";
  cin >> hour_arrival;
  cout << "enter time of arrival in minutes";
  cin >> min_arrival;
  paper_time = (starting_hour * 60) + starting_min;
  arrival_time = (hour_arrival * 60) + min_arrival;
  if (paper_time == arrival_time)
  {
    cout << "on time";
  }

  if (paper_time < arrival_time)
  {
    int total;
    total = arrival_time - paper_time;
    if (total <= 30)
    {
      cout << "on time" << endl;
      cout << total << "minutes before the start" << endl;
    }
    else if (total > 59)
    {
      int ans1;
      int ans2;
      ans1 = total % 60;
      ans2 = total / 60;
      cout << "late" << endl;
      cout << ans2 << ":" << ans1 << "hour before the start" << endl;
    }
    else
    {
      cout << "late" << endl;
      cout << total << "minutes after the start";
    }
  }
  if (paper_time > arrival_time)
  {
    int total;
    total = paper_time - arrival_time;
    if (total <= 30)
    {
      cout << "on time" << endl;
      cout << total << "minutes before the start" << endl;
    }
    else if (total > 59)
    {
      int ans1;
      int ans2;
      ans1 = total % 60;
      ans2 = total / 60;
      cout << "early" << endl;
      cout << ans2 << ":" << ans1 << "hours before the start" << endl;
    }
    else 
    {
      cout << "early" << endl;
      cout << total << "minutes after the start";
    }
  }
}