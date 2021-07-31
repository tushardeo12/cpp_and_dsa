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

        while (j <= i)
        {
            cout << j;

            j++;
        }
        // if (i>1)
        // { int var1=i-1;
        //   while (var1>0)
        //   {
        //       cout<<var1;
        //       var1--;
        //   }

        // }
        j = i - 1;
        while (j >= 1)
        {
            cout << j;

            j--;
        }

        cout << endl;
        i++;
    }
    return 0;
}