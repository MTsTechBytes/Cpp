using namespace std;
#include<iostream>
#include<conio.h>
int main()
{
    int arr[5]={4, 1, 5, 2, 3};
    for(int i =1; i <= 4; i++)
    {
        for (int j = 0; j <=(5-i-1) ; j++)
        {
            if (arr[j]>arr[j+1])
            {
                // int temp=arr[j];
                // arr[j]=arr[j+1];
                // arr[j+1]=temp;
                // there is a built in function for swaping as below:
                swap(arr[j], arr[j+1]);
            }
        }
    }
    for(int i=0; i<=4; i++)
    {
        cout<<arr[i]<<" ";
    }
}
// 1st iteration : n-1
// 2nd iteration : n-2
// 3rd iteration : n-3
//and so on....
// ith iteration : n-i
// We push the largest number at the end by comparing the adjacent indexes of array in bubble sorting 