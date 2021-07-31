#include <iostream>
using namespace std;
int main()
{
    int N;
    cin >> N;
    int i = 1;
    int odd = 1;
    while (i <= N)
    {   int k=1;
        while (k<=N-i)
        {
            cout<<" ";
            k++;
        }

        int j = 1;
        while (j <= odd)
        {
            cout << "*";
            j++;
        }
        odd = odd + 2;
        cout << "\n";
        i++;
    }
    return 0;
}