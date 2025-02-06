using namespace std;
#include<iostream>
int main()
{
    int i,j,k;
    for(i=1 ; i<=5; i++)
    {
        for(j=1; j<=i; j++)
        {
            cout<<" ";
        }

        for(k=1 ; k<=5-i ;k++)
        {
            cout<<i;
        }

        cout<<endl;
    }
    return 0;
}