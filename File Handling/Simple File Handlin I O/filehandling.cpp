using namespace std;
#include<iostream>
#include<conio.h>
#include<fstream>

#include<string>
#include<string.h>
#include<vector>
#include<iomanip>
int main()
{
    ofstream myfile1;
    myfile1.open("sample.txt");
    string s1 = "I am Muhammad Talha.";
    myfile1 << s1 ;
    myfile1.close();

    ifstream myfile2;
    myfile2.open("sample.txt");
    string s2;
    getline(myfile2, s2);
    cout << s2;
    myfile2.close();

    
}