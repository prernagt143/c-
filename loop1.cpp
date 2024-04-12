/*"Take the number N and the name from the user as inputs, and print the name N times.

Test Case1:
Input:
2
Bedanti
Output:
Bedanti 
Bedanti"*/


#include<iostream>
using namespace std;

int main(){
    int n;
    string name;

    cout << "Enter the number:";
    cin >> n;
    cout << "Enter the name:";
    cin >> name;

    for(int i=1;i<=n;i++){
        cout << name << endl;
    }

    return 0;
}