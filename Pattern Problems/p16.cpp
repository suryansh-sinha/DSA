#include <iostream>
using namespace std;

int main()
{
    int rows = 5;
    char c = 'A';
    for (int j = 0; j < rows; j++)
    {
        for (int i = 0; i <= j; i++)
        {
            cout << c;
        }
        c += 1;
        cout << endl;
    }
    return 0;
}