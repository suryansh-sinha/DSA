#include <iostream>
using namespace std;

int main()
{
    int rows = 5, count = 1;
    for (int j = 0; j < rows; j++)
    {
        for(int i=0; i<=j; i++)
            cout << count++ << " ";
        cout << endl;
    }
    return 0;
}