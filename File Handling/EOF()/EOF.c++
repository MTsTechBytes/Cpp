using namespace std;
#include <iostream>
#include <fstream>
#include <string>
#include <string.h>



int main() {
    //Write a program to read a file and print it on the screen using EOF() function.
    // ifstream in;
    // string st1;
    // in.open("example.txt");
    // if(in.fail())
    // {
    //     cout<<"File not found";
    //     return 0;
    // }
    // while(in.eof() == 0)
    // {
    //     getline(in, st1);
    //     cout<<st1<<endl;
    // }
    // in.close();
    // return 0;

    ofstream out;
    out.open("example.txt");
    out<<"This is me\n";
    out<<"This is me also\n";
    out<<"This is also me\n";
    out<<"This is alsi me\n";
    out<<"This is also me alsi";
    out.close();

    ifstream in;
    string st1, st2;
    in.open("example.txt");

    if(in.is_open())
    {
        while(!in.eof())
        {
            getline(in, st1);
            cout<<st1<<endl;
        }
    }
    else 
    {
		cout << "file opening error";
		return 1;
	}



    return 0;
}