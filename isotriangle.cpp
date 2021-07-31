#include <iostream>
using namespace std;
int main()
{
    int N;

    cin >> N;
    int i = 1;
    while (i <= N)
    {
        int k = 1;

        while (k <= N - i)
        {
            cout << " ";
            k++;
        }

        int j = 1;
        int z = 2;
        while (j <= (2 * i) - 1)
        {
            if (j <= (((2 * i) - 1) / 2) + 1)
            {
                cout << j;
                j++;
            }
            else
            {
                cout << j - z;
                j++;
                z = z + 2;
            }
        }
        cout << endl;
        i++;
    }
    return 0;
}