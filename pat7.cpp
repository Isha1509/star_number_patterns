/*
PATTERN
    1
   321
  54321
 7654321
987654321
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
        for(int j=i*2-1;j>0;j--)
        cout<<j ;
        cout<<endl;
    }
    return 0;
}
