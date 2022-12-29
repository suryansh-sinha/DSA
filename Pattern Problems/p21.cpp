#include <iostream>
using namespace std;

int main()
{
    int rows = 6;
    for (int i = 1; i <= rows+1; i++){
        if(i == 1 || i == rows + 1){
            for(int j=0; j<rows; j++)
                cout << "*";
        }
        else{
            for(int j=0; j<rows; j++){
                if(j==0 || j==rows-1)
                    cout << "*";
                else
                    cout << " ";
            }
        }
        cout << endl;
    }
    return 0;
}