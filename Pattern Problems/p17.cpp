
#include <iostream>
using namespace std;

int main()
{
    int rows = 5;
    for (int j = 0; j < rows; j++)
    {
        char c = 'A';
        // Spaces
        for (int s = 0; s < rows - j - 1; s++)
            cout << " ";
        for (int i = 0; i < j; i++)
            cout << c++;
        c -= 1;
        for(int i=1; i<j; i++)
            cout << --c;
        cout << endl;
    }
    return 0;
}
