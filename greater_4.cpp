/*"Write a program to take four numbers from the user and print the greater number of the four numbers. (assume all the numbers are distinct).

Test Case1:
Input:
98
13
29
58
Output:
98"*/

#include<iostream>
using namespace std;

int main(){
    int a,b,c,d,max,smax;
    cout << "Enter the 4 numbers :";
    cin >> a >> b >> c >> d;

    if(a>b){
        max=a;
    }
    else{
        max=b;
    }
    if(c>d){
        smax=c;
    }
    else{
        smax=d;
    }
    if(max>smax){
        cout << "The maximum number is :" << max;
    }
    else{
        cout << "The maximum number is :" << smax;
    }

    return 0;
}