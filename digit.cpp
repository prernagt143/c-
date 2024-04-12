/*Write a program to take a number from the user and print the number of digits in the given number. (can you do it without  loop O(1) )
*/

#include<iostream>
using namespace std;

int main(){

    int num , count=0;

    cout << "Enter the number :F";
    cin >>  num;
    while(num>0){
        count++;
        num/=10;
    }
    cout << "the number of digits are " << count;
    return 0;
} 