#include <iostream>
using namespace std;

// https://practice.geeksforgeeks.org/problems/count-digits5716/1

int main(){
    cout << "Enter the number you want to check: ";
    int N;
    cin >> N;
    cout << "Divisible by only: " << evenlyDivides(N) << "digits." << endl;
    return 0;
}

int evenlyDivides(int N){
        //code here
        int count=0, bkup=N;
        for(; bkup>0; bkup/=10){
            int digit = bkup%10;
            if(digit == 0)
                continue;
            if(N%digit == 0)
                count++;
        }
        return count;