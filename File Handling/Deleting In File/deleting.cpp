#include <iostream>
#include <conio.h>
#include <fstream>
#include <string>
#include <string.h>

using namespace std;

int main()
{
    string name, email, delete_contact;
    bool found = false;

    fstream contacts_reader("contacts.txt", ios::in);
    fstream contacts_writer("temp.txt", ios::out);

    cout << "Enter the name of the contact you want to delete: ";
    getline(cin, delete_contact);

    if( (contacts_reader.is_open()) && (contacts_writer.is_open()) )
    {
        while(!contacts_reader.eof())
        {
            contacts_reader >> name >> email;
            if(delete_contact == name)
            {
                found = true;
            }
            else 
            {
                contacts_writer << name << " " << email << endl;
            }
        }
    }
    else
    {
        cout << "File not opened!" << endl;
    }

    remove("contacts.txt");
    rename("temp.txt", "contacts.txt");

    contacts_reader.close();
    contacts_writer.close();

    if(found == true)
    {
        cout << "Contact: " << delete_contact << " deleted successfully." << endl;
    }
    else
    {
        cout << "Contact not found." << endl;
    }
    return 0;
}
