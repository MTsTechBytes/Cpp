using namespace std;
#include <iostream>
#include <fstream>

int main()
{
    fstream myfile;
    myfile.open("new.txt", ios::out);
    myfile << "Goodbye koochi koochi bhootna\n";
    myfile << "Goodbye koochi koochi";

    myfile.close();
    return 0;
}