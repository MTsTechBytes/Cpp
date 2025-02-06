using namespace std;
#include<iostream>
#include<conio.h>

int main()
{
    // Enum declaration with weekdays, it stores in integers
    //           0        1         2          3        4       5         6
    enum week {Monday, Tuesday, Wednesday, Thursday, Friday, Saturday, Sunday};

    week today = Wednesday;
    cout << "Today is " << today << endl;

    //Output will be
    // Today is 2

    return 0;
}