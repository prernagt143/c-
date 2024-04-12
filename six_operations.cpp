/*"Write a program to take two numbers from the user and perform Six basic operations (addition, subtraction, multiplication, division, integer division and modulus) on those two numbers.
        
Note: Print the output in the order as mentioned in the question.

Test Case1:
Input: 
12 
5
Output: 
17
7
60
2.4
2
2
"*/

#include<iostream>
using namespace std;

int main(){
    int a, b;
    string c;
    
    cout << "enter  a and b value :";
    cin >> a >> b;

    cout << "a + b =" << a+b << endl;
    cout << "a - b =" << a-b << endl;
    cout << "a * b =" << a*b << endl;
    cout << "a / b =" << a/b << endl;
    cout << "a % b =" << a%b << endl;
    

    return 0;
}
