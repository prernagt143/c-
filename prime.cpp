/*"Write a program to check if a number is a special type of number called a 'prime number'. A prime number is a number that is only divisible by 1 and itself, and it doesn't have any other factors. 
For example, the number 7 is a prime number because it can only be divided by 1 and 7 without leaving a remainder. However, the number 12 is not a prime number because it has other factors, such as 2, 3, 4, and 6, in addition to 1 and 12. (Take the number from the user)? Learn sieve algorithm

Test Case1:
Input:
97
Output:
Yes 

Test Case2:
Input:
49
Output:
No"*/

#include<iostream>
using namespace std;

int main(){

    int num , count=0;
    cout << "Enter the number :";
    cin >> num;
    for(int i=1;i<=num;i++){
        if(num%i==0){
            count++;
        }
    }
    if(count==2){
        cout << "Yes,Prime!";
    }
    else{
        cout << "No,Not Prime!";
    }
    return 0;
}