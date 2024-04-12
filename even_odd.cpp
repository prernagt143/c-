/*"Write a program to take a number from the user and print that number as Odd or Even.

Test Case1:
Input:
56
Output:
Even

Test Case2:
Input:
87
Output:
Odd"*/

#include<iostream>
using namespace std;

int main(){
    int num;

    cout << "enter the number :";
    cin >> num;

    if(num % 2==0){
        cout << "Even";
    }
    else{
        cout << "Odd";
    }

    return 0;
}