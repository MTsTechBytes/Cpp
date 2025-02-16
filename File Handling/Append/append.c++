using namespace std;
#include <iostream>
#include <fstream>

int main()
{
    fstream myfile;
    myfile.open("new.txt", ios::out | ios::app);
    myfile <<" Greetings";
    myfile.close();
    return 0;
}
