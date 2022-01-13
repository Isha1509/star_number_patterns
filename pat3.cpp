/* PATTERN
*****
 ****
  ***
   **
    *
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        for(int k=i-1;k>0;k--)
        cout<<" ";
        for(int j=n-i+1;j>0;j--)
        cout<<"*";
        cout<<endl;
    }
}
