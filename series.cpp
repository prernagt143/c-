/*"Write a program to calculate the sum of the following series where N is input from the user. 1 + 1/2 + 1/3 + 1/4 + 1/5 +…………1/N

Test Case1:
Input:
4
Output:
2.08"*/

#include<iostream>
using namespace std;

int main(){

    int n;
    cout << "enter the number :";
    cin >> n;
    double sum=0.0;
    int i=1;
    while(i<=n){
        sum+=(1.0/i);
        i++;
    }    
    cout << "The sum of series is " << sum;
    return 0;
}
