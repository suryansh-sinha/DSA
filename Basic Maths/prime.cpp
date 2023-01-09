#include <iostream>
#include <math.h>
using namespace std;

int main(){
    int num, count=1;
    cout << "Enter the number: ";
    cin >> num;
    for(int i=2; i <= sqrt(num); i++){
        if(num%i == 0){
            cout << num << " is not Prime." << endl;
            return 0;
        }
    }
    cout << num << " is Prime." << endl;
    return 0;
}

// We can also use Euclidean's Theorem using Recursion. Covered Later.