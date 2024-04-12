/*"Write a program to take an integer as input and print the smallest positive integer that is a multiple of both 2 and n.

Test Case:
Input:
5
Output:
10

Test Case:
Input:
6
Output:
6
"*/

#include<iostream>
using namespace std;

int main(){
    int num;

    cout << "enter the number :";
    cin >> num;

    if(num>0){
        if(num%2!=0){
            cout << 2*num;
        }
        else{
            cout << num;
        }
    }
    else{
        cout << "not valid";
    }

    return 0;
}