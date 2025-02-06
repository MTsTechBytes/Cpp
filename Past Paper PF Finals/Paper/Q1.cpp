using namespace std;
#include <iostream>
#include <conio.h>

void initializeSeating(int Arr[][10], int rows, int columns)
{
    cout << "Enter the seating arrangement (0 for empty, 1 for occupied):" << endl;
    for(int i = 0; i < rows; i++)
    {
        for(int j = 0; j < columns; j++)
        {
            cout << "Seat [" << i+1 << "][" << j+1 <<"]: ";
            cin >> Arr[i][j];
            
        }
        cout << endl;
    }
}

void displaySeating(int Arr[][10], int rows, int columns)
{
    cout << "Current Seating Arrangement:" << endl;
    for(int i = 0; i < rows; i++)
    {   
        for(int j = 0; j < columns; j++)
        {
            cout << Arr[i][j] <<"\t";
        }
        cout << endl;
    }
}

void reservedSeat(int Arr[][10], int rows, int columns)
{   
    if(Arr[rows][columns] == 0)
    {
        Arr[rows][columns] = 2;
        cout << "Seat [" << rows + 1 << "][" << columns + 1 << "] has been reserved." << endl;
    }
    else
    {
        cout << "Seat [" << rows + 1 << "][" << columns + 1 << "] is not available for reservation." << endl;
    }
}

void checkAvailibilty(int Arr[][10], int rows, int columns)
{
    if(Arr[rows][columns] == 0)
    {
        cout << "Seat [" << rows + 1 << "][" << columns + 1 << "] is available for reservation." << endl;
    }
    else if (Arr[rows][columns == 1])
    {
        cout << "Seat [" << rows + 1 << "][" << columns + 1 << "] is already occupied." << endl;
    }
    else
    {
        cout << "Seat [" << rows + 1 << "][" << columns + 1 << "] is reserved." << endl;
    }
}

int main()
{
    int rows, columns;

    cout << "Enter the number of rows: ";
    cin >> rows;
    cout << "Enter the number of columns: ";
    cin >> columns;

    int seating[10][10] = {0};

    // Initialize the seating arrangement
    initializeSeating(seating, rows, columns);

    // Display the current seating arrangement
    displaySeating(seating, rows, columns);

    // Reserving a seat
    int reserveRow, reserveColumn;
    cout << "Enter row and column to reserve a seat (1-based index): ";
    cin >> reserveRow >> reserveColumn;
    reserveRow--; // Convert to 0-based index
    reserveColumn--; // Convert to 0-based index
    reservedSeat(seating, reserveRow, reserveColumn);

    // Display the updated seating arrangement
    displaySeating(seating, rows, columns);

    // Check availability of a specific seat
    int checkRow, checkColumn;
    cout << "Enter the row and column to check availability (1-based index): ";
    cin >> checkRow >> checkColumn;
    checkRow--; // Convert to 0-based index
    checkColumn--; // Convert to 0-based index
    checkAvailibilty(seating, checkRow, checkColumn);

    // Display the updated seating arrangement
    displaySeating(seating, rows, columns);

}   
