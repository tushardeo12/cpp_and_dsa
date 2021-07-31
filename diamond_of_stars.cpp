#include <iostream>
using namespace std;

int main()
{

    int N, k, j;
    cin >> N;
    int n1 = (N + 1) / 2;  // this is for the 1st half of the code.
    int n2 = N / 2;   // this is for the 2nd half of the code.

     /* below is the 1nd part of the code which prints the below 
    half of the star pattern and is independent of the below  half*/
    int i = 1;
    while (i <= n1)
    {   k = 1;
        while (k <= n1 - i)
        {
            cout << " ";
            k++;
        }
        j = 1;
        while (j <= (2 * i) - 1)
        {
            cout << "*";
            j++;
        }
        cout << endl;
        i++;
    }
    /* below is the 2nd part of the code which prints the below 
    half of the satr pattern and is independent of the above half*/
    i=n2;
    while (i>=1)
    {   k=1;
        while (k<=n2-i+1)
        {
            cout<<" ";
            k++;
        }
        j=1;
        while (j<=(2*i)-1)
        {
            cout<<"*";
            j++;
        }
        cout<<endl;
        i--;
    }
    return 0;
}
