/*
PATTERN
    1
   123
  12345
 1234567
123456789
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        for(int k=n;k>i;k--)
        cout<<" ";
        for(int j=1;j<i*2;j++)
        cout<<j ;
        cout<<endl;
    }
    return 0;
}
