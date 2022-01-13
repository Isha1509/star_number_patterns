/* PATTERN
    *
   ***
  *****
 *******
*********     
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        for(int k=n-i;k>0;k--)
        cout<<" ";
        for(int j=1;j<=i;j++)
        cout<<"*";
        for(int j=i-1;j>0;j--)
        cout<<"*";
        cout<<endl;
    }
    return 0;
}
