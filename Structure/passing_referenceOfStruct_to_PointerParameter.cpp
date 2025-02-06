using namespace std;
#include <iostream>
#include <conio.h>
#include <string.h>

struct pop {
    char name[10];
    float population;
};

void fun(pop *x, pop *y) {
    cout<<"The country with higher population : "<<endl;
    if (x->population > y->population)
    {
        cout<<"Name : "<<x->name<<endl;
        cout<<"Population : "<<x->population<<endl;
    }
    else
    {
        cout<<"Name : "<<y->name<<endl;
        cout<<"Population : "<<y->population<<endl;
    }
}

int main()
{
    pop a, b;
    strcpy(a.name, "India");
    a.population = 1380000000;
    strcpy(b.name, "China");
    b.population = 1439323776;
    fun(&a, &b);
}