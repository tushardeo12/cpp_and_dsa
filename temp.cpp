#include <iostream>
using namespace std;
bool checkMember(int n){

  /* Don't write main().
   * Don't read input, it is passed as function argument.
   * Return output and don't print it.
   * Taking input and printing output is handled automatically.
  */
  int check=0;
    int first = 0;
    int second = 1, next;
    for (int i = 0; i < 10000; i++)
    {
        if (i == 0)
        {   
            next = 0;
            if (next == n)
            {   check=1;
                break;
            }
        }
        else
        {   
            next = first + second;
            first = second;
            second = next;
            if (next == n)
            {   check=1;
                break;
            }
        }
    }
    if (check==1)
    {
        return true;
    }else
    {
        return false;
    }

}
int main()
{
    int n;
    cin>>n;
    cout<<checkMember(n);


}