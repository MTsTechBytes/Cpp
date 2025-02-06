using namespace std;
#include <iostream>
#include <conio.h>
//for each loop
int main() 
{
    char str[12];
    cout<<"Enter char array : ";
    cin.getline(str, 12);


    //For each loop
    for (char ch : str)  // it will individually print each character from the string
    {
        cout << ch << " ";
    }

    cout<<endl;
    return 0;

}
