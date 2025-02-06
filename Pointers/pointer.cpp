using namespace std;
#include<iostream>
int main ()
{
	int n=200;
	int *pointer;// declaring a pointer
	pointer=&n;// pointer stores address of variable n
	int x;
	x=*pointer;
	int **parent_pointer;
	parent_pointer = &pointer;

	cout<<"The address of n = "<<&n<<endl;
	cout<<"The value of n = "<<n<<endl;
	cout<<"The value of pointer = "<<pointer<<endl;
	cout<<"The value of (*pointer) = "<<(*pointer)<<endl;
	cout<<"The value of x = "<<x<<endl;

	cout<<"The value of parent_pointer = " << parent_pointer <<endl;
	cout<<"The value of pointer = " << *parent_pointer << endl;
	cout <<"The value of n through parent_pointer = " << **parent_pointer << endl;
	return 0;
}