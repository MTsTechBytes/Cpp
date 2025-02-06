using namespace std;
#include<iostream>
int main()
{
    int i,j;
    char count= 'A';
    for(i=1; i<=3; i++)
    {
        for(j=1 ; j<=3 ; j++)
        {
            cout<<count<<" ";
            count++;
        }
        cout<<"\n";
    }
    return 0;
}