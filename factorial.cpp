// Write the factorial of the number :

#include<iostream>
using namespace std;

int main(){
    int num,fact=1;

    cout << "Enter the number :";
    cin >> num;
    int i=1;
    while(i<=num){
        fact=fact*i;
        i++;
    }

    cout << "The factrial of the number is " << fact;
    return 0;
}