using namespace std;
#include <iostream>
#include <conio.h>

int main() 
{
    int length = 0;
    char str[] = "apna college";

    for(int i = 0;  str[i] != '\0'; i++)
    {
        length++;
    }

    cout << "Length of the string: " << length << endl;

    return 0;
}