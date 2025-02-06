using namespace std;
#include <iostream>
#include <string>
#include <fstream>

string getUserKey()
{
    string userKey;
    cout << "Enter the user key : ";
    getline(cin, userKey);

    return userKey;
}

string getFileKey()
{
    string fileKey;
    ifstream keyFile("key.dat");
    
    if(keyFile.is_open())
    {
        getline(keyFile, fileKey);
        keyFile.close();
    }
    else
    {
        cout << "Unable to open key.dat file." << endl;
    }

    return fileKey;
}

bool compareKey(string &userKey, string &fileKey)
{
    return (userKey == fileKey);
}

void updateKey()
{
    string userKey = getUserKey();
    string fileKey = getFileKey();

    if(compareKey(userKey, fileKey))
    {
        cout << "The keys match. Please enter a new key to update: " << endl;
        userKey = getUserKey();

        ofstream file("key.dat");
        if (file.is_open())
        {
            file << userKey;
            file.close();
            cout << "Key updated successfully." << endl;
        }
        else
        {
            cout << "Unable to open key.dat file for writing." << endl;
        }
    }
    else
    {
        cout << "The keys do not match." << endl;
    }
}

int main()
{
    updateKey();
    return 0;
}