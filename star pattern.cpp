#include <iostream>
using namespace std;
int main()
{
    int n,i,j;
    cout<< "enter the number of rows needed:";
    cin>>n;
    for (i=n;i>=1;i--)
    {
        for (j=1;j<=n;j++)
        {
            if (j>=i)
            {
                cout<<"* ";
            }
            else
            {
                cout<<" ";
            }

        }
        cout<<endl;
    }
}
/*enter the number of rows needed:3
  * 
 * * 
* * * 
*/