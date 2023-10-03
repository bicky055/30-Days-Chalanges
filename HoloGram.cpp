#include "bits\stdc++.h"
using namespace std;

int main()
{

    int RowCount, ColCount;
    cin >> RowCount >> ColCount;

    for (int row = 0; row < RowCount; row++)
    {

        if (row == 0 || row == RowCount - 1)
        {
            for (int col = 0; col < ColCount; col++)
            {
                cout << "* ";
            }
        }
        else
        {
            cout << "* ";
            for (int col = 0; col < ColCount - 2; col++)
            {
                cout << " ";
            }
            cout << "* ";
        }
        cout << endl;
    }
    return 0;
}