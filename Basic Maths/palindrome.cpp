#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Please enter the number: ";
    cin >> n;
    int bkup = n;
    int rev=0;
    for(;n>0; n/=10){
        rev = rev*10 + n%10;
    }
    if(rev == bkup)
        cout << "The number is a palindrome" << endl;
    else
        cout << "The number is not a palindrome" << endl;
    return 0;
}