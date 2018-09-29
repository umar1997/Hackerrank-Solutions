#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    ll m,n,r,i,j;
    cin>>m>>n>>r;
    ll arr[m][n];
    ll arr1[m][n];
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            cin>>arr[i][j];
        }
    }
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {   ll row=i,col=j;
            ll layer=min(min(i,j),min(m-i-1,n-j-1));
            ll no_ele=(m+n-2)*2-8*layer;
            ll loop=r%no_ele;
             if(no_ele==0)
                    {
                        arr1[row][col]=arr[i][j];
                        continue;
                    }
            while(loop--)
            {
                
                if(row==layer && col==layer)
                    row++;
                else if(col==layer && row==m-layer-1)
                    col++;
                else if(col==n-layer-1 && row==m-layer-1)
                    row--;
                else if(row==layer && col==n-layer-1)
                    col--;
                else if(row==layer)
                    col--;
                else if(col==layer)
                    row++;
                else if(row==m-layer-1)
                    col++;
                else
                    row--;
            //   i=row;j=col;
            }
            arr1[row][col]=arr[i][j];
        }
    }
     for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            cout<<arr1[i][j]<<" ";
        }
         cout<<'\n';
    }
    return 0;
}

