#include <iostream>
using namespace std;

int main()
{
    int rows = 5;
    for (int j = 0; j <= rows; j++)
    {
        char c = 'A';
        for(int i=0; i<j; i++,c++){
            cout << c;
        }
        cout << endl;
    }
    return 0;
}