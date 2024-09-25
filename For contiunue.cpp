#include <iostream>
using namespace std;
int main()
{
    int i;
    for (i=1;i<=10;i++)
    {
        if(i==3 || i==5)
        continue;
        cout<<i<<" ";
    }
}
/*1 2 4 6 7 8 9 10 */