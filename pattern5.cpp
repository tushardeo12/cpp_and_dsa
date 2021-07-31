#include <iostream>
using namespace std;
int main()
{
    int N; // taking then number of rows as input
    
    cin >> N;
    int i=1,a=1;
    while (i<=N)
    {   int k=1;
        while(k<=N-i) 
        {
            cout<<"  ";
            k++;
        }
        int j=1;
        while (j<=i)
        {
            cout<<a;
            j++;
            a++;
        }
        a=a-(i-1);
        cout<<"\n";
        i++;
        
    }
    

    return 0;
}