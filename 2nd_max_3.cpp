/*"Write a program to take 3 numbers from the user and output the second max of 3 numbers.
(First, do it in the normal way then do it by using 3 comparisons)

Test Case1:
Input:
5
4
6
Output:
5"*/

#include<iostream>
using namespace std;

int main(){
    int a,b,c,max;
    cout << "enter 3 numbers :";
    cin >> a >> b >> c ;

    if(a>b){
        max=a;
    }
    else{
        max=b;
    }
    if(max>c){
        cout << "2nd Maximum number is :" << c;
    }
    else{
        cout << "2nd Maximum number is :" << max;
    }

    return 0;
}