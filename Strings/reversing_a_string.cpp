using namespace std;
#include<iostream>
#include<string>
#include <algorithm> // is header file for reverse() function;


int main()
{
    string str = "Hello World";
    string reversed_string = "";

    //Reversing a string
    for (int i = str.size(); i >= 0; i--)
    {
        reversed_string += str[i];
    }
    cout << "Reversed String: " << reversed_string << endl;

    //Alternative method
    // reverse(str.begin(), str.end());
    return 0;
}