#include<iostream>
using namespace std;
int main()
{
   int N; // number of lines
   cout<<"enter the number of rows you want to print -";
   cin>> N;
   int i=1;
   while (i<=N)
   {int j=1;
      while (j<=i)
      {
          cout<<j<<" ";
          j=j+1; 
      }
      cout<<"\n";
      i=i+1;

   }
   
}