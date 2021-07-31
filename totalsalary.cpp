#include<iostream>
#include<cmath>
using namespace std;

int main() {
    int basic;
    char grade; // enter the upper case either (A/B/C)
    cin>>basic>>grade;
    float hra = 0.20*basic;
    float da=.50*basic;
    int allow;
    if(grade=='A')
    {
        allow=1700;
    }
    else if (grade=='B')
    {
        allow=1500;
    }
     else 
    {
        allow=1300;
    }
    float pf=0.11*basic;
    float totalSalary=(basic+hra+da+allow)-pf;
    
    cout<<round(totalSalary)<<endl;
    
    
    
    
	
	
    return 0;
}
