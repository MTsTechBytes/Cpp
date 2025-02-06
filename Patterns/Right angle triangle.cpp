using namespace std;
#include<iostream>
int main()
{
    int i,j,r,c;
    cout<<"Enter number of rows\n";
    cin>>r;
    cout<<"Enter number of columns\n";
    cin>>c;
    for ( i = 1; i <= r; i++)
    {
        for (j = i; j <= c; j++)
        {
           cout<<"*";
        }
        cout<<"\n";
    }
    return 0;
}