#include <iostream>
using namespace std;

int main(){
    int rows = 10;
    for (int i=0; i<rows/2; i++){
        // Spaces
        for(int s=rows/2 - i - 1; s > 0; s--)
            cout << " ";
        for(int j=1; j<= i*2 + 1; j++)
            cout << "*";
        cout << endl;
    }
    for (int i = 0; i < rows / 2; i++)
    {
        // Spaces
        for (int s = 0; s < i; s++)
            cout << " ";
        for (int j = rows - 1; j > i*2; j--)
            cout << "*";
        cout << endl;
    }
}