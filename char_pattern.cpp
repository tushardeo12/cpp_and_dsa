#include<iostream>
using namespace std;
int main()
{
   int N; // number of lines
   cout<<"enter the number of rows you want to print -";
   cin>> N;
   int i=1;
   int ascii=65;
   while (i<=N)
   {int j=1;
    
      while (j<=N)
      {
          cout<<char(ascii)<<" ";
          j=j+1;
          ascii=ascii+1;

      }
      ascii=ascii-3;
      cout<<"\n";
      i=i+1;

   }
   
}