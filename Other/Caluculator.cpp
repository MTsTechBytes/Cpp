#include<iostream>
#include<conio.h>
#include<iomanip>
using namespace std;
int main()
{
    char choice;
    float a,b;
    cout<<"Enter any two numbers to perform arithematic operation \n";
    cin>>a>>b;
    cout<<"Choose the opertion you want to apply on those two numbers \n ";
    cout<<"(1)-Additon \n (2)-Subtraction \n (3)-Multiplication \n (4)-Division \n" ;
    choice=getch();
    switch (choice)
    {
    case '1': cout<<a+b<<endl;
              break;
    case '2': cout<<a-b<<endl;
              break;
    case '3': cout<<a*b<<endl;
              break;
    case '4': cout<<a/b<<endl;
              break;
    
    default: cout<<"Wrong Input";
        break;
    }
    return 0;
}