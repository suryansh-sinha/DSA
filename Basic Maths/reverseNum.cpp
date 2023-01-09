#include <iostream>
using namespace std;

// https://practice.geeksforgeeks.org/problems/reverse-bits3556/1

int main(){
    int n;
    cout << "Please enter the number: ";
    cin >> n;
    int rev=0;
    for(;n>0; n/=10){
        rev = rev*10 + n%10;
    }
    cout << "The reversed digit is: " << rev << endl;
    return 0;
}