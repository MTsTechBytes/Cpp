using namespace std;
#include <iostream>
#include <conio.h>
#include <string.h>


// Union is same as struct but we can only use it's one attribute at a time
union ex {
    short int a;          // the datatype which has maximum memory would be stored just in memory location
    float b;  // like here float has more memory than short int so float will be stored in memory location which will be 4 bytes
    
};

int main() {
    
    union ex x;
    x.a = 10; // assigning value to short int
    cout << "Short int value: " << x.a << endl;
    
    x.b = 10.5; // assigning value to float
    cout << "Float value: " << x.b << endl;

    // the size of union is equal to the size of the largest data type



    getch();
    return 0;    
}
