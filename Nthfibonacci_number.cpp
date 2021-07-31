// #include<iostream>
// using namespace std;
// int main()
// {
//     int N;
//     cin >> N;
//     int first = 0;
//     int second = 1;
//     int next;
//     for (int n = 1; n <= N; n++)
//     {
//         if (n < 2)
//         {
//             next = 1;
//         }
//         else{
//             next = first + second;
//             first = second;
//             second = next;
//         }
//     }
//     cout << next << endl;

//     return 0;
// }

//  2nd way
#include <iostream>
using namespace std;
int main()
{
    int N;
    cin >> N;
    int first = 0;
    int second = 1;
    int next;
    for (int n = 1; n <= N; n++)
    {
       
        
            next = first + second;
            first = second;
            second = next;
       
    }
    cout << first << endl;

    return 0;
}