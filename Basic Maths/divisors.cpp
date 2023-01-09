#include <iostream>
using namespace std;

int main(){
    cout << "Enter number: ";
    int num;
    cin >> num;
    for(int i=1; i<=num; i++){
        if(num%i == 0)
            cout << i << " ";
    }
    cout << endl;
    return 0;
}