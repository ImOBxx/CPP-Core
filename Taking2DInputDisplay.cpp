#include <iostream>
using namespace std;

int main()
{
    int MAX_SIZE = 100;
    int a[MAX_SIZE][MAX_SIZE];
    int row, col;

    cout << "Enter Number Of Rows: ";
    cin >> row;
    cout << "Enter Number Of Columns";
    cin >> col;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << "Enter Array Element a[" << i << "][" << j << "]: ";
            cin >> a[i][j];
        }
    }
    cout << "Display 2D Array Elements: " << endl;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
}