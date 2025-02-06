using namespace std;
#include<iostream>
#include<conio.h>

struct record {
    int marks;
};

void getValues(record arr[])
{
    for(int i = 0; i < 5; i++)
    {
        cout << "Enter marks for student " << i + 1 << ": ";
        cin>>arr[i].marks;
    }
}


void sortedArray(record arr[])
{
    for (int i = 0; i < 4; i++)
    {
        for (int j = i + 1; j < 5; j++)
        {
            if (arr[i].marks > arr[j].marks)
            {
                record temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }


    cout<<"Sorted Array is : \n";
    for(int i = 0; i < 5; i++)
    {
        cout<<arr[i].marks<<" ";
    }
}

int main()
{
    record r[5];
    getValues(r);  //We are passing array because Array ka name hi kafi hai
    sortedArray(r); //We are passing array because Array ka name hi kafi hai
}