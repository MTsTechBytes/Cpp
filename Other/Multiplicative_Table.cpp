using namespace std;
#include<iostream>
int main()
{
    int i,n;
    cout<<"Enter a number to print its multiplicative table \n";
    cin>>n;
    for ( i = 1; i <=10 ; i++)
    {
        cout<<n<<"x"<<i<<"="<<n*i<<"\n";
    }
    return 0;
}