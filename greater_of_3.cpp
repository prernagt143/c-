/*"Write a program to take three numbers from the user and print the greater number of the three numbers. (Assume all three numbers are distinct)

Test Case1:
Input:
20
3
43
Output:
43"*/

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
        cout << "Maximum number is :" << max;
    }
    else{
        cout << "Maximum number is :" << c;
    }

    return 0;
}