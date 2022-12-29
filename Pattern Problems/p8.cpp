#include <iostream>
using namespace std;

int main()
{
    int rows = 5;
    int temp = 2 * rows - 1;
    for (int i = 1; i <= rows; i++)
    {
        // Spaces 1 -
        for (int s = 1; s < i; s++)
            cout << " ";
        for (int j=temp; j > 0; j--)
            cout << "*";
        temp -= 2;
        cout << endl;
    }
    return 0;
}