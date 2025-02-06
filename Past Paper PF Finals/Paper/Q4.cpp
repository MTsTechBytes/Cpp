using namespace std;
#include <iostream>
#include <conio.h>

// void swap(int n1, int n2) {
//     	int t=n1;
// 	n1=n2;
// 	n2=t;
// }
// int main() {
//     int n1=5; int n2=8;
//     swap(n1,n2);
//     cout<<n1<<'\t'<<n2;
//     return 0;
// }

// void swap(int *n1, int *n2)
// {
//     int t = *n1;
//     *n1 = *n2;
//     *n2 = t;
// }

// int main()
// {
//     int n1 = 5, n2 = 8;
//     swap(&n1, &n2);
//     cout << n1 << "\t" << n2;
//     return 0;
// }

int main()
{
    int arr[10] = {5, 8, 3, 1, 9, 2, 0, 6, 7, 4};
    int *p;
    p = arr;

    for (int i = 0; i <= 8; i++)
    {
        for (int j = i+1; j <= 9; j++)
        {
            if (*(p+i) > *(p+j))
            {
                int temp = *(p+i);
                *(p+i) = *(p+j);
                *(p+j) = temp;
            }
        }
    }

    for (int i = 0; i <= 9; i++)
    {
        cout << *(p+i) << " ";
    }
    return 0;
}
