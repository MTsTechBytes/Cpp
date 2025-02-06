using namespace std;
#include<iostream>
int main()
{
    int i,j,k;
    for(i=1 ; i<=5; i++)
    {
        for(j=1; j<=5-i; j++)
        {
            cout<<" ";
        }

        for(k=1 ; k<=i ;k++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}