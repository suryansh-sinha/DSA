#include <iostream>
using namespace std;

int main()
{
    for (int i = 1; i <= 5; i++)
    {
        // Inverted Spaces 1 -
        for (int s = 0; s < 5-i; s++)
            cout << " ";
        for (int j = 1; j < i * 2; j++)
            cout << "*";
        cout << endl;
    }
    return 0;
}