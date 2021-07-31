#include <iostream>
using namespace std;
int main()
{
    int N, current, previous, check = 0, i = 1;
    cin >> N;
    cin >> previous;
    while (i <= N - 1)
    {
        cin >> current;
        if (current == previous)
        {
            check = 2;
            
        }
        else if (current < previous)
        {
            if (check == 0)
            {
                previous = current;
                i++;
                continue;
            }
        }
        else if (current > previous)
        {
            if (check < 2)
            {
                check = 1;
                previous = current;
                i++;
                continue;
            }
        }
        check = 2;
        i++;
    }
    if (check == 2)
    {
        cout << "False" << endl;
    }
    else if(check==1||check==0)
    {
        cout << "True" << endl;
    }

    return 0;
}