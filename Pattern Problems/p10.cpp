#include <iostream>
using namespace std;

int main(){
    int rows = 10;
    for(int i=1; i<=rows/2; i++){
        for(int j=0; j<i; j++)
            cout << "*";
        cout << endl;
    }
    for(int i=rows/2 - 1; i > 0; i--){
        for(int j = i; j>0; j--)
            cout << "*";
        cout << endl;
    }
    return 0;
}