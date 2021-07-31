#include <iostream>

using namespace std;

int main()
{
    int N;
    cin >> N;
    int sum_of_even = 0;
    int sum_of_odd = 0;

    while (N!=0)
    {
        int rem = N % 10;
        if (rem % 2 == 0)
        {
            sum_of_even = sum_of_even + rem;
        }
        else
        {
            sum_of_odd = sum_of_odd + rem;
        }
        N = N / 10;
    }
    cout<<sum_of_even<<" "<<sum_of_odd<<endl;  
    return 0;
}
