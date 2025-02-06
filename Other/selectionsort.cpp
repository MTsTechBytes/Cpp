using namespace std;
#include<iostream>
#include<conio.h>
int main()
{
    int arr[5];
    cout<<"Enter an array: "<<endl;
    for(int i=0;i<=4;i++)
    {
        cin>>arr[i];
    }

    for(int i=0; i<=3; i++)                 
    {                                      
        for(int j=i+1; j<=4; j++)           
        {
            if (arr[i]>arr[j])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    for (int i = 0; i <= 4; i++)
    {
        cout<<arr[i]<<" ";
    }
    
}