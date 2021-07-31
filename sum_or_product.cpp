#include <iostream>
using namespace std;

int main()
{
    int N;
    cin >> N;
    int C;
    cin >> C;
    int sum = 0, product = 1;
    for (int i = 1; i <= N; i++)
    {
        sum = sum + i;
        product = product * i;
    }
    if (C==1)
    {
        cout<<sum<<endl;
    }
    else if(C==2)
    {
        cout<<product<<endl;
    }
    else
    {
        cout<<-1<<endl;
        
    }

    
    return 0;
}
