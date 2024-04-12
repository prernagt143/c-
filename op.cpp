//  "Write a program to take three variables to store your birth date, birth month, and birth year, respectively, and then print them one by one in a specified order.

// Test Case1:
// Explanation:
// If the birth date is 22, the birth  is May and the birth year is 2001 then
// Output:
// 22
// May
// 2001"

#include<iostream>
using namespace std;

int main(){
    int date , year;
    string month;
    cout << "enter date , month and year ";
    cin >> date >> month >> year;

    cout << date << endl;
    cout << month << endl;
    cout << year << endl;

    return 0;
}



