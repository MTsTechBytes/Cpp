using namespace std;
#include <iostream>
#include <conio.h>

void initialize_seating(int Arr[][10], int rows, int columns)
{
    cout << "Enter 1 for occupied and 0 for empty : " << endl;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            cout << "Seat [" << i+1 <<"][" << j+1 << "] : ";
            cin >> Arr[i][j];
        }
        cout << endl;
    }
}

void display_seating(int Arr[][10], int rows, int columns)
{
    cout << "Current Seating Arrangement is : " << endl;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            cout << Arr[i][j] << " ";
        }
        cout << endl;
    }
}

void reserved_seat(int Arr[][10], int rows, int columns)
{
    if (Arr[rows][columns] == 0)
    {
        Arr[rows][columns] = 2;
        cout << "The Seat" << Arr[rows][columns] << "is successfully reserved" << endl;
    }
    else 
    {
        cout << "The seat is occupied " << endl;
    }
}

void check_Availibilty(int Arr[][10], int rows, int columns)
{
    if (Arr[rows][columns] == 0)
    {
        cout << "The seat is available for reservation." << endl;
    }
    else if (Arr[rows][columns] == 1)
    {
        cout << "The seat is occupied." << endl;
    }
    else
    {
        cout << "The seat is already reserved" << endl;
    }
}

int main()
{
    int seat[10][10];
    int rows, cols;
    cout << "Enter number of rows: ";
    cin >> rows;
    cout << "Enter number of columns: ";
    cin >> cols;

    initialize_seating(seat, rows, cols);

    display_seating(seat, rows, cols);

    int reserve_row, reserve_col;
    cout << "Enter the row and column you want to reserve (base index 1)\n";
    cin >> reserve_row >> reserve_col;
    reserve_row--;
    reserve_col--;

    reserved_seat(seat, reserve_row, reserve_col);

    display_seating(seat, rows, cols);

    int check_row, check_col;
    cout << "Enter the row and column you want to check for availibilty (base index 1)\n";
    cin >> check_row >> check_col;
    check_row--;
    check_col--;
    check_Availibilty(seat, check_row, check_col);

    display_seating(seat, rows, cols);

    return 0;
}




