// Using switch case, write a c++ program to input any one alphabet (assuming input only alphabets between A-Z in both upper case and lower case) from user and count in respective vowel count. By default the switch counts constants. The program asks the user to check another alphabet or not and finally it displays how many times user enters a particular vowel & constants.

using namespace std;
#include<iostream>
#include<conio.h>
int main()
{
    int vowel=0 , consonant=0;
    char ch, choice;
    do
    {
       cout<<"Enter an alphabet to check whether it is vowel or consonant : "<<endl;
        cin>>ch;
        switch (ch)
        {
            case 'A': 
            case 'a': 
            case 'E': 
            case 'e': 
            case 'I': 
            case 'i': 
            case 'O': 
            case 'o': 
            case 'U': 
            case 'u': cout<<"Vowel"<<endl;
                        vowel++;
                break;
            default: cout<<"Consonant"<<endl;
                        consonant++;
                break;
        }
        cout<<"Do you want check another alphabet or not (Y/N) : "<<endl;
        cin>>choice;
    } while (choice!='n');
    cout<<"The vowel appears "<<vowel<<" times "<<endl;
    cout<<"The consonant appears "<<consonant<<" times "<<endl;
}