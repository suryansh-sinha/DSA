#include <iostream>
using namespace std;

int main()
{
    int num = 4;
    int size = 2*num - 1;
    int start = 0, end = size;
    int arr[size][size];
    while(num>0){
        for(int i=start; i<end; i++){
            for(int j=start; j<end; j++){
                if(i==start || i==end-1 || j==start || j==end-1)
                    arr[i][j] = num;
            }
        }
    start++;
    end--;
    num--;
    }
    for(int i=0; i<size; i++){
        for(int j=0; j<size; j++)
            cout << arr[i][j] << " ";
        cout << endl;
    }
    return 0;
}