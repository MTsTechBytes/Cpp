using namespace std;
#include<iostream>
#include<conio.h>
int main()
{
    int vowel=0 ,consonant=0 ;
    char ch,option;
    do
    {
        cout<<"Enter Alphaphet : "<<endl;
        cin>>ch;
        switch(ch)
        {
            case 'a':
            case 'A':
            case 'e':
            case 'E':
            case 'i':
            case 'I':
            case 'o':
            case 'O':
            case 'u':
            case 'U':
                vowel++;
            default:
                consonant++;
        }

        cout<<"Do you want to continue(y/n) : ";
        cin>>option;
    }while(option!='n');

   cout<<"You enter vowel  "<<vowel<<" times"<<endl;
   cout<<"You enter constant  "<<consonant<<" times"<<endl;
}
