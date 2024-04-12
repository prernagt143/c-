/*"Write a program to take a number from the user and print the sum of the digits of the given number.

Test Case1:
Input:
456
Output:
15
Explanation:
4+5+6 = 15"*/

#include<iostream>
using namespace std;

int main(){

    int num,digit,sum=0;

    cout << "enter the number :";
    cin >> num;

    for(int i=num;i>0;i/=10){
        digit=i%10;
        sum+=digit;
    }
    cout << "The sum is " << sum; 

    return 0;
}