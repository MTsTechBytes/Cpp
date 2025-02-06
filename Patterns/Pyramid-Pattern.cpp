using namespace std;
#include<iostream>
int main()
{
    char i,j,k,l;
    for(i=1 ; i<=5; i++)
    {
        //Spaces                    //         1
        for(j=1 ; j<=5-i ;j++)      //       1 2 1
        {                           //     1 2 3 2 1      
            cout<<" ";              //   1 2 3 4 3 2 1     
        }                           // 1 2 3 4 5 4 3 2 1                     
                                            
        //First triangle
        for(k=1 ; k<i ;k++)            
        {
            cout<<k;
        }

       // Second triangle
        for(l=i ; l>=1; l--)
        {
            cout<<l;
        }
        cout<<endl;
    }
    return 0;
}