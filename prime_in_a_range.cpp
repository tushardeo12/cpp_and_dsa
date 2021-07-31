#include <iostream>
using namespace std;
int main()
{
    int N;
    cin >> N;
    
    int i, j;
    for (i = 2; i <= N; i++)
    {   int flag = 0;
        for (j = 2; j < i; j++)
        {
            if (i % j == 0)
            {
                flag = 1;
                break;
            }
        }
        if (flag == 0)
        {
            cout << i << endl;
        }
    }

    return 0;
}