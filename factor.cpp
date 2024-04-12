// factor of n numer :-

#include<iostream>
using namespace std;

int main(){
    int num;
    cout << "Enter the numer :";
    cin >> num;

    for(int i=1;i<=num;i++ ){
        if(num%i==0){
            cout << "The of "<< "is " << i << endl;
        }
    }
    return 0;
}