/*"Write a program to take two numbers, A and B from the user. Your task is to find the largest number that is less than A and can be divided evenly by B. Can you figure out that number?

Test Case1:
Input:
15
4
Output:
12

Test Case2:
Input:
27
5
Output:
25
"*/

#include<iostream>
using namespace std;

int main(){
    int a, b, greater;

    cout << "enter the two number :";
    cin >> a >> b ;
    if(a>b){
        greater=a;
    }
    else{
        greater=b;
    }

    cout << "The greater number is " << greater;

    return 0;
}