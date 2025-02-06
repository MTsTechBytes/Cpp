using namespace std;
#include<iostream>
#include<conio.h>
#include<string.h>

int main()
{
    char str1[20], f_name[20], l_name[20], occupation[20];
    cout<<"Enter a string: ";
    cin.getline(str1,20);  // can be used alternatively with cin>>ch;, because cin>>ch doesn't count spaces
    cout<<"You entered: "<<str1;

    cout<<"\nEnter your first name : ";
    cin.getline(f_name, 20);
    cout<<"\nYou entered: "<<f_name;


    cout<<"\nEnter your last name : ";
    cin.getline(l_name, 20);     //     
    cout<<"\nYou entered: "<<l_name;

    cout<<"\nYour full name is: "<<f_name<<" "<<l_name;

    cout<<"\nEnter your occupation : ";
    cin.getline(occupation, 20, '.');     // cin.getline(var_name, length, delimiter);  // delimiter is '.', after which program will not read extra characters
    
    cout<<"\nYour occupation is : "<<occupation;
    return 0;
 
}