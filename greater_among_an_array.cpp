#include <iostream>
using namespace std;
int main()
{
    int n, grt;
    cin >> n;
    int array[10];
    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }
    cout << endl;
    grt=INT8_MIN; // initialising the "grt" with the first element in the array
    for (int i = 0; i < n; i++)
    {
        if (array[i] > grt)
        {
            grt = array[i];
        }
        
    }
    cout << grt << endl;
    return 0;

   
}