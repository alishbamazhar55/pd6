#include <iostream>
using namespace std;
string grades(float percentage);
main()
{
    int sub1;
    int sub2;
    int sub3;
    int sub4;
    int sub5;
    int total;
    string name;
      float percentage;
    string result;
    cout << "enter sub1: ";
    cin >> sub1;
    cout << "enter sub2: ";
    cin >> sub2;
    
    cout << "enter sub3: ";
    cin >> sub3;
    cout << "enter sub4: ";
    cin >> sub4;
    cout << "enter sub5: ";
    cin >> sub5;
    cout << " enter name: ";
    cin >> name;
    total=sub1+sub2+sub3+sub4+sub5;
    percentage=(total*0.2);
    result= grades( percentage);
   cout << result;
    
     }
string grades(float percentage)
{
   
      string grade;
      
if (percentage>90 && percentage <100)
 {
    grade="A+";
 }
 else if (percentage>80 && percentage <=90 )
 {
    grade="A";
 }
 else if (percentage>70 && percentage <=80)
 {
    grade="B+";
 }
 else if( percentage>60 && percentage <=70)
 {
    grade="B";
 }
 else if(percentage>50 && percentage <=60)
 {
    grade="C";
 }
 else if (percentage>40 && percentage <=50) 
 {
    grade="D";
 }
 else if ( percentage < 40)
 {
    grade = "F";
 }
 return grade;
 
}