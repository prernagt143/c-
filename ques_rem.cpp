/*Write a program to take two numbers A and B from the user and calculate the quotient and remainder when number A is divided by number B.

Note: Print the output in the order as mentioned in the question.

Test Case1:
Input:
12
5
Output:
2
2

Test Case2:
Input: 
15
6
Output:
2
3
*/

#include<iostream>
using namespace std;

int main(){
    int a,b;

    cout << "enter the number a and b :";
    cin >> a >> b;
    int rem = a%b;
    int ques=a/b;

    cout << "the questient is : " << ques << endl;
    cout << " the remmainder is : "<< rem << endl;

    return 0;
}