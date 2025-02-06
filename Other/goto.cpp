using namespace std;
#include<iostream>
#include<conio.h>
int main()
{
    label:
        cout<<"We are at the start\n";
        goto end;
    cout<<"Hello World! \n";
    goto label;
    end:
        cout<<"We are at the end\n";
}