#include <iostream>
using namespace std;
string ReadPassword()
{
    string Password;
    cout << "Enter Your Password Capital Letter: ";
    cin >> Password;
    return Password;
}
bool GuessPasswordTrial(string OriginalPassword)
{
    string word = "";
    int Counter = 0;
    cout << "\n";
    for (int i = 65; i <= 90; i++)
    {
        for (int j = 65; j <= 90; j++)
        {
            for (int k = 65; k <= 90; k++)
            {
                word = word + char(i);
                word = word + char(j);
                word = word + char(k);
                Counter++;
                cout << "Trail[" << Counter << "] : ";
                cout << word << endl;
                if (word == OriginalPassword)
                {
                    cout << "Password is: " << OriginalPassword << endl;
                    cout << "Found after " << Counter << " Trial(s)." << endl;
                    return true;
                }

                word = "";
            }
        }
    }
    return false;
}
int main()
{
    GuessPasswordTrial(ReadPassword());
    return 0;
}