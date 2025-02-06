using namespace std;
#include<iostream>
#include<conio.h>
int main()
{
    int currentNumber, newNumber;
    cout<<"Enter a number:"<<endl;
    cin>>currentNumber;
    if (currentNumber%2 !=0)
    {
        newNumber = 3*currentNumber + 1;
    }
    else
    {
        newNumber = currentNumber / 2;
    }
    cout<<"The new number is = "<<newNumber<<endl;
    return 0;
}