/*"Write a program to take two integers M, and N and print the sum of numbers in the range M to N.

Test Case1:
Input:
2
7
Output:
27
Explanation:
Output should be 27 as the sum of numbers (2+3+4+5+6+7=27)"*/

#include<iostream>
using namespace std;

int main(){
    int m,n;
    int sum=0;
    cout << "Enter starting range :";
    cin >> m;

    cout << "Enter ending range :";
    cin >> n;

    for (int i=m;m<=n;m++){
        sum+=m;
    }
    cout << "The sum is :" << sum;

    return 0;
}