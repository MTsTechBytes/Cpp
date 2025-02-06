using namespace std;
#include<iostream>
#include<conio.h>
int main()
{
    int num;
    cout<<"Enter the number for its conversion: "<<endl;
    cin>>num;
    if (num == 0)
    {
        cout<<"Binary is : 0"<<endl;
    }
    
    else 
    {
        cout<<"Binary of "<<num<<" is : ";
        int binary[32], index=0;
        while (num> 0)
        {
            binary[index] = num % 2;
            num = num / 2;
            index++;
        }
        
        // For reverse print of array
        for (int  i = index-1; i >= 0; i--)
        {
            cout<<binary[i];
        }    
    }
}