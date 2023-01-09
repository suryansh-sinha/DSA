#include <iostream>
#include <math.h>
using namespace std;

// Check if a number is armstrong or not.

int main(){
    int num, bkup, num_of_digits = 0, temp, ans=0;
    cout << "Please enter the number: ";
    cin >> num;
    bkup = num;
    temp = num;
    while(num>0){
        num_of_digits += 1;
        num/=10;
    }
    while(bkup>0){
        ans += pow(bkup%10, num_of_digits);
        bkup /= 10;
    }
    if(temp == ans)
        cout << "The number " << temp << " is armstrong." << endl;
    else
        cout << "The number " << temp << " is not armstrong." << endl;
    return 0;
}