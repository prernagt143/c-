/*Write a program to convert a temperature from Celsius to Fahrenheit using the formula  C/5 = (F-32)/9

Test Case1:
Input: 
30 
Output:
86
*/

#include<iostream>
using namespace std;

int main(){
    int C;
    cout << "Enter the Temperature in Cencius :";
    cin >> C;

    int F=(9*(C/5))+32;
    cout << "The temperature in Fahrenheit is :" << F;

    return 0;
}