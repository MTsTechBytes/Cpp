using namespace std;
#include <iostream>

const int MAX_BOOKS = 3;

struct Book {
    string title;
    string author;
    double price;
};

Book inventory[MAX_BOOKS];


int main()
{
     //Adding A book
    inventory[0].title = "The Great Gatsby";
    inventory[0].author = "F. Scott Fitzgerald";
    inventory[0].price = 10.99;
    // cout<<"Enter the name of the book : ";
    // cin>>inventory[0].title;
    // cout<<"Enter the name of the author : ";
    // cin>>inventory[0].author;
    // cout<<"Enter the price of the book : ";
    // cin>>inventory[0].price;

    //Displaying A book
    cout << "Title: " << inventory[0].title << endl;
    cout << "Author: " << inventory[0].author << endl;
    cout << "Price: $" << inventory[0].price << endl;
    return 0;
}