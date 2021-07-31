#include<iostream>
using namespace std;

int main() {
	int x;
    cin>>x;
    int series,count=0,N=1;
    while(N)
    {
        series=(3*N)+2;
        N++;
        if (series%4!=0)
        {
            cout<<series<<" ";
            count++;
        }
        if(count==x)
        {
            break;
        }
        
    }
    return 0;
    
    

	
}
