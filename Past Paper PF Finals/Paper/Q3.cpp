using namespace std;
#include <iostream>
#include <conio.h>
#include <string.h>

int balance=10000;

void process_transaction(int trans_amount = 1000 , char trans_type[] = "withdrawl")
{   
    if(strcmp(trans_type, "widthdrawl") == 0)
    {
       balance -= trans_amount;
    }
    else
    {
        balance += trans_amount;
    }
        
    cout << "\nYour Updated balance is:" << balance;
}

int main()
{  
    char transaction_type[20];
    int transaction_amount;

    cout << "Enter transaction type:";
    cin >> transaction_type;

    cout << "Enter transaction amount:";
    cin >> transaction_amount;

    process_transaction(transaction_amount, transaction_type);

    process_transaction(transaction_amount);

    process_transaction();  

    return 0;
}
