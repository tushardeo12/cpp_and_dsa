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
        int var1=i;
        while (j <= (2 * i) - 1)
        {
            if (j <= (((2 * i) - 1) / 2) + 1)
            { 
                cout << var1;
                var1++;
                j++;
                
            }
            else
            {
                cout << var1 - z;
                j++;
                var1++;
                z = z + 2;
            }
        }
        cout << endl;
        i++;
    }
    return 0;
}