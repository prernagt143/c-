/*Write a program to take 4 numbers from the user and output the third max of these 4 numbers.

Test Case1:
Input:
5
4
6
7
Output:
5
*/

#include<iostream>
using namespace std;

int main(){
    int a, b, c, d,max1,max2,max3,smax,thirdmax;

    cout << "Enter the 4 numbers";
    cin >> a >> b >> c >> d ;

    if(a>b){
        max1=a;
    }
    else{
        max1=b;
    }
    if(c>d){
        max2=b;
    }
    else{
        max2=d;
    }
    if(max1>max2){
        max3;
    }

    return 0;
}