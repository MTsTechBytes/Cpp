using namespace std;
#include<iostream>
#include<conio.h>
int main()
{
    int binNum,decNum=0,remainder,power=1;
    cout<<"Enter the binary code for conversion: "<<endl;
    cin>>binNum;
    while(binNum>0)
    {
        remainder=binNum%10;
        decNum+=remainder*power;
        binNum=binNum/10;
        power*=2;
    }
    cout<<"The number is : "<<decNum;
}