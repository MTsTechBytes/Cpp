using namespace std;
#include<iostream>
#include<conio.h>
int main()
{
    int secs, min, hr;
    cout<<"Enter time in seconds: "<<endl;
    cin>>secs;
    min = secs / 60;
    secs = secs % 60;
    hr = min / 60;
    min = min % 60; 
    cout<<hr<<"hours "<<min<<"minutes "<<secs<<"seconds";
    return 0;
}