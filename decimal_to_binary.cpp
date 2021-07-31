#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int N, rem;
    int z,i=0 ,rev = 0;
    cin >> N;
   
    while (N!=0)
    {
        rem = N % 2;
        N = N / 2;
        z=pow(10,i);
        rev=rev+(rem*(z));
        i++;
        
    }
    
    
    cout<<rev<<endl;
    
}
