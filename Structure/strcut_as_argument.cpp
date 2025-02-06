using namespace std;
#include<iostream>
#include<conio.h>
#include<string.h>

struct Car {
    char model[10];
    int year;
    char color[10];
};

void simpleDisplay(Car first)
{
    cout<<&first<<endl;
    cout<<"Model = "<<first.model<<"\nYear = "<<first.year<<"\nColor = "<<first.color<<endl;
}

void displayByReference(Car &first)
{
    cout<<"In function"<<&first<<endl;
    cout<<"Model = "<<first.model<<"\nYear = "<<first.year<<"\nColor = "<<first.color<<endl;
}

int main ()
{
    Car c1;
    strcpy(c1.model, "Toyota");
    c1.year = 2023;
    strcpy(c1.color, "Blue");
    cout<<"In main" <<&c1<<endl;
    simpleDisplay(c1);  // if we simply pass struct as an argument , it will make the copy of the struct and then pass the copy to the function.
    displayByReference(c1);  //if we pass by reference , it will pass the address of the struct to the function.
}