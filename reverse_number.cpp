#include<iostream>
using namespace std;

int main() {
	int N,rem,rev=0;
    cin>>N;
    
	while(N!=0)
    {
        rem=N%10;
        N=N/10;
        rev=(rev*10)+rem;
    }
    while(N!=0)
    {
        rem=N%10;
        N=N/10;
        rev=(rev*10)+rem;
    }
    
    
    
    cout<<rev<<endl;
    return 0;
}
