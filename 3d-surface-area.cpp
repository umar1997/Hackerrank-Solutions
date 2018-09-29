#include<bits/stdc++.h>
using namespace std;
int main()
{
    int r,c,i,j,area=0;
    cin>>r>>c;
    int arr[r][c];
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            cin>>arr[i][j];
        }
    }
    area+=2*(r*c);
    for(i=0;i<r;i++)
    {
        area+=arr[i][0];
        area+=arr[i][c-1];
    }  
    for(i=0;i<c;i++)
    {
        area+=arr[0][i];
        area+=arr[r-1][i];
    }
    for(i=0;i<r-1;i++)
    {
        for(j=0;j<c-1;j++)
        {
            area+=abs(arr[i][j]-arr[i][j+1]);
            area+=abs(arr[i][j]-arr[i+1][j]);
        }
    }
    for(i=0;i<r-1;i++)
    {
        area+=abs(arr[i][c-1]-arr[i+1][c-1]);
    }
      for(i=0;i<c-1;i++)
    {
        area+=abs(arr[r-1][i]-arr[r-1][i+1]);
    }
    cout<<area<<'\n';
   return 0;
}
