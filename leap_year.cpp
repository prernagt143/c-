/*"
Imagine you and your friends are exploring the concept of leap years. A leap year is a year that is evenly divisible by 4, except for years that are divisible by 100 but not divisible by 400. In simpler terms, it's a special year with an extra day in February (February 29th). You're curious to know whether a particular year is a leap year or not.

Write a program to take a year from the user and output whether a given year is a leap year or not.

Note: A year is said to be a leap year if it is either divisible by 400 or it should be divisible by 4 and not by 100.

Tips:

1. Remember, a leap year occurs every 4 years, except for years that are divisible by 100 but not by 400.
2. Pay attention to the conditions for determining a leap year.
3. Understand the significance of leap years in adjusting the calendar.

Test Case1:
Input:
1800
Output:
No

Test Case2:
Input:
2000
Output:
Yes

Test Case3:
Input:
2024
Output:
Yes"*/

#include<iostream>
using namespace std;

int main(){
    int year;
    cout << "Enter the year:";
    cin >> year;

    if(year % 4==0 && year % 100!=0 ){
        cout << year << " is the leap year";
    }
    else{
        cout << year << " is not a leap year";
    }

    return 0;
}