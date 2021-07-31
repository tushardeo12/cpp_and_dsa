#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int N, rem, rev = 0, i = 0, sum = 0;
    cin >> N;

    while (N != 0)
    {

        rem = N % 10;
        N = N / 10;
        rev = rem * pow(2, i);
        sum = sum + rev;
        i++;
    }
    cout << sum << endl;
    return 0;
}
