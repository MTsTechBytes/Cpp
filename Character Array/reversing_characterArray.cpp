using namespace std;
#include<iostream>
#include<string.h>

//Reversing a character array
int main ()
{
    char ch[12] = "Hello World";
    int start = 0, end = strlen(ch)-1;

    while (start < end)
    {
        swap(ch[start], ch[end]);
        start++;
        end--;
    }

    cout << "Reversed Character Array : " << ch << endl;
    return 0;
}