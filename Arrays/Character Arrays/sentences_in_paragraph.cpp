using namespace std;
#include<iostream>
#include<conio.h>
#include<string.h>
int main()
{
    int count=0;
    char str[100];
    cout<<"Enter a paragraph with some sentences in it: \n";
    cin.get(str, 100);
    for(int i = 0; i < sizeof(str); i++)
    {
        if(str[i] == '.')
        {
            count++;
        }
    }
    cout<<"There are: "<<count<<" sentences.";
}