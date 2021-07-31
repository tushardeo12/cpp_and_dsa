#include <iostream>
using namespace std;
int main()
{
    char c;
    c = cin.get();
    int character = 0, digits = 0, spaces = 0;
    while (c != '$')
    {
        if (c >= 48 && c <= 57)
        {
            digits++;
        }
        else if (c == ' ' || c == '\t' || c == '\n')
        {
            spaces++;
        }
        else if (c>=97 && c<=122)
        {
            character++;
        }

        c = cin.get();
    }
    cout << character << " " << digits << " " << spaces << endl;

    return 0;
}