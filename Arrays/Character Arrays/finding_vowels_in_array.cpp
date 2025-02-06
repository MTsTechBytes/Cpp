using namespace std;
#include<iostream>
#include<conio.h>
#include<string.h>
int main()
{
    int vowels=0, consonants=0;
    char str[100];
    cout<<"Enter some sentences: \n";
    cin.get(str, 100);
    for(int i=0; i<sizeof(str); i++)
    {
        if(str[i]=='A' || str[i]=='a' || str[i]=='E' ||  str[i]=='e' || str[i]=='O' || str[i]=='o' || str[i]=='U' || str[i]=='u')
        {
            vowels++;
        }
        else
        {
            if(str[i]!=' ')
            {
                consonants++;
            }
        }
    }
    cout<<"There are: "<<vowels<<" vowels. \n";
    cout<<"There are: "<<consonants<<" consonants. \n";
}