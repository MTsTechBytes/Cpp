// Write a program that prompts the user to input an integer and then outputs both the reverse of individual digits of the number and the sum of the digits. For example, it should output the individual digits 3456 as 6 5 4 3 and Sum is: 18, and output individual digits of 2345 as 5 4 3 2 and Sum is: 14.

using namespace std;
#include<iostream>
#include<conio.h>
int main()
{
    int number, digit, sum=0;
    cout<<"Enter and multiple digit number: "<<endl;
    cin>>number;

    cout<<"Reversed Digits: "<<endl;
    while (number > 0)
    {    
        digit = number % 10;      // Extract the last digit
        cout << digit << " ";     // Print the digit
        sum += digit;             // Add to sum
        number = number / 10;     // Remove the last digit
    }

    cout << endl;
    cout << "Sum is: " << sum << endl;
    return 0;
}