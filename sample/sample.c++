using namespace std;
#include<iostream>
#include<conio.h>
int main()
{
    int arr[] = {1, 2, 3 ,4, 5};
    int size = sizeof(arr);
    cout<<size<<endl;
    cout<<arr<<endl;  //display address
    cout<<arr[2]<<endl;
    arr[2] = 8;
    cout<<arr[2]<<endl;

    char ch[10] = "Talha";
    ch[2] = 'k';
    cout<<ch[2]<<endl;
}