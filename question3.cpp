// Write a program to find the sum of n natural number.

#include <iostream>

using namespace std;
int main()
{
    int number, sum;
    sum = 0;
    cout << "Enter a positive integer: ";
    cin >> number;
    for (int i = 1; i <= number; ++i)
    {
        sum += i;
    }
    cout << "Sum = " << sum << endl;
    return 0;
}