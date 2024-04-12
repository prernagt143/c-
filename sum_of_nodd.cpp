/*"Imagine you're on an adventurous quest to unravel the mysteries of numbers! Today, your quest involves exploring the realm of odd numbers. Odd numbers are those that are not divisible by 2, leaving a remainder of 1. Your task is to calculate the sum of all the odd numbers up to a certain value chosen by you.

Write a program to print the sum of odd numbers up to N.

Tips:

1. Remember, odd numbers are those that are not divisible by 2, leaving a remainder of 1.
2. Pay attention to calculating the sum accurately.
3. Ensure the correctness of the range of numbers included in the sum.

Test Case1:
Input:
20
Output:
100
"*/


#include<iostream>
using namespace std;

int main(){
    int n;
    int sum=0;

    cout << "enter the limit:";
    cin >> n;

    for(int i=1;i<=n;i++){
        if(i%2!=0){
            sum+=i;
        }
    }
    cout << "The sum of odd numbers: " << sum;
    return 0;
}