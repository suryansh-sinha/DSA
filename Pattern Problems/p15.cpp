#include <iostream>
using namespace std;

int main()
{
    int rows = 5;
    for (int j = 0; j < rows; j++)
    {
        char c = 'A';
        for (int i = rows - j; i > 0; i--, c++)
        {
            cout << c;
        }
        cout << endl;
    }
    return 0;
}