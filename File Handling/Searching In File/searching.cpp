using namespace std;
#include <iostream>
#include <conio.h>
#include <fstream>
#include <string>
#include <string.h>

int main()
{
    string contacts_name, contacts_email, find_contact; 
    bool found = false;

    fstream contacts_reader;
    contacts_reader.open("contacts.txt", ios::in);

    cout << "Who do you want to email? ";
    cin >> find_contact;

    if(contacts_reader.is_open())
    {
        while(!contacts_reader.eof())
        {
            contacts_reader >> contacts_name >> contacts_email;
            if(find_contact == contacts_name)
            {
                found = true;
                cout << "Their email is: " << contacts_email << endl;
            }
        }
        if(found == false)
        {
            cout << "Contact not found!\n";
        }
    }
    else
    {
        cout << "File cannot be opened." << endl;
    }

    contacts_reader.close();
    return 0;
}
