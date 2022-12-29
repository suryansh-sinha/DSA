#include <iostream>
using namespace std;

int main()
{
    int rows = 10;
    for (int i = 0; i < rows / 2; i++)
    {
        for (int j = 0; j <= i; j++)
            cout << '*';
        for (int s = rows - 2 * i - 2; s > 0; s--)
            cout << ' ';
        for (int j = 0; j <= i; j++)
            cout << '*';
        cout << endl;
    }
    for (int i = 1; i < rows / 2; i++)
    {
        for (int j = rows / 2 - i - 1; j >= 0; j--)
            cout << "*";
        for (int s = 0; s < 2 * (i); s++)
            cout << " ";
        for (int j = rows / 2 - i - 1; j >= 0; j--)
            cout << "*";
        cout << endl;
    }
    
    return 0;
}