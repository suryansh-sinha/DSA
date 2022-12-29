#include <iostream>
using namespace std;

int main(){
    int rows = 5;
    for(int i=0; i<rows; i++){
        char c = char('E' - i);
        for(int j=0; j<=i; j++){
            cout << char(c++) << " ";
        }
        cout << endl;
    }
    return 0;
}