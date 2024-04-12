/*Write a program that takes a number from the user and prints the number that is formed by reversing the digits of the number.

Test Case1:
Input:
123
Output:
321
Turn on */

#include<iostream>
using namespace std;

int main(){

    int num,rev=0,rem;

    cout << "Enter the number :";
    cin >> num;

    while(num>0){
        rem=num%10;
        rev=rev*10+rem;
        num/=10;
    }
     
    cout << "The reversed number is :" << rev;

    return 0;
}