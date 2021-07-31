#include <iostream>
using namespace std;
int main()
{
    int n, sum=0;
    cin >> n;
    int array[10];
    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }
    cout << endl;
   
    for (int i = 0; i < n; i++)
    {
        sum=sum+array[i];
        
    }
    cout << sum << endl;
    return 0;

   
}