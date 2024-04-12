/*Write a program to take a positive number from the user and then display the last digit of that number.
        
Test Case1:
Input:
843
Output:
3

Test Case2:
Input:
321
Output:
1
*/

#include<iostream>
using namespace std;

int main(){
    int num;

    cout << "Enter the number :";
    cin >> num;
    
    int last_digit=num % 10;

    cout << "The last digit of " << num << " is " << last_digit;

    return 0;

}