#include<iostream>
using namespace std;


int main(){

      int S,E,W,C; // taking input
    cin>>S>>E>>W;
    
    while(S<=E)
    {
         C =(((S-32) * 5)/9);
        cout<<S<<" "<<C<<endl;
        S=S+W;
    }
    return 0;
    
}

