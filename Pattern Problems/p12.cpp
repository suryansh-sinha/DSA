#include <iostream>
using namespace std;

int main(){
    int rows = 4;
    for(int j=0; j<=rows; j++){
        for(int i=0; i<j; i++)
            cout << i+1;
        for(int i=0; i<(rows - j) * 2; i++)
            cout << " ";
        for(int i=j; i>0; i--)
            cout << i;
        cout << endl;
    }
    return 0;
}