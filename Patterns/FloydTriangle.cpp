using namespace std;
#include<iostream>
int main()
{
    int i,j;
    int count=1;
    for(i=1 ; i<=4; i++)
    {
        for(j=1 ; j<=i ;j++)
        {
            cout<<count <<" ";
            count++;
        }
        cout<<endl;
    }
    return 0;
}