/*"Write a program to take a number from the user and output whether that number is negative, positive or zero.

Test Case1:
Input:
6
Output:
Positive

Test Case2:
Input:
0
Output:
Zero"*/

#include<iostream>
using namespace std;

int main(){
    int num;

    cout << "enter the number :";
    cin >> num;

    if(num==0){
        cout << "0";
    }
    else if(num>0){
        cout << "positive" ;
    }
    else {
        cout << "negative";
    }

    return 0;

}