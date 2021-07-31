#include <iostream>
using namespace std;
void printtable(int start, int end, int step)
{
    for (int i = start; i <= end; i += step)
    {
        int celcius = ((i - 32) * 5) / 9;
        cout << i << " " << celcius << endl;
    }
}
int main()
{
    int S, E, W;
    cin >> S >> E >> W;
    printtable(S, E, W);

    return 0;
}