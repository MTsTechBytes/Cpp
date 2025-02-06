// Write a C++ program to find all numbers between 2 to n(value of 'n' from user) that are not divisible by 2 and 5. Also display the values and their sum as in the example. For example if user enters n=20 then the program will display 3+7+9+11+13+17+19=79

using namespace std;
#include <iostream>
#include <conio.h>
int main()
{
    int i, n, sum = 0;
    cout << "Enter a number: " << endl;
    cin >> n;
    for (i = 2; i <= n; i++)
    {
        if ((i % 2 != 0) && (i % 5 != 0)) 
        {
            cout << i << " + ";
            sum += i;
        }
    }
    cout << " = " << sum;
}

