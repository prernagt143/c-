/*"Write a program to take two inputs from the user and swap them without using a temporary or third variable.

Test Case1:
Input:
2
3
Output:
3
2
"*/

#include<iostream>
using namespace std;

int main(){
    int a,b;

    cout << "enter the two numbers :";
    cin >> a >> b;
    a,b=b,a;

    cout << a << endl << b;

    return 0;
}

