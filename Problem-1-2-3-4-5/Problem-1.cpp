#include <iostream>
using namespace std;
void PrintTableHeader()
{
    cout << "\n\n\t\t Multiplcation Tabel From 1 to 10\n\n";
    cout << "\t";
    for (int i = 1; i <= 10; i++)
    {
        cout << i << "\t";
    }
    cout << "\n______________________________________________________________________________________\n";
}
string ColumSperator(int i)
{
    if (i < 10)
    {
        return "    |";
    }
    else
    {
        return "   |";
    }
}
void PrintMultiplcationTable()
{
    PrintTableHeader();
    for (int i = 1; i <= 10; i++)
    {
        cout << i << ColumSperator(i) << "\t";
        for (int j = 1; j <= 10; j++)
        {
            cout << i * j << "\t";
        }
        cout << endl;
    }
}
int main()
{
    PrintMultiplcationTable();
    return 0;
}