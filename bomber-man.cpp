#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    int r,c;char *p1,*p2,*p3;
    ll n,i,j,l,m,k;
    cin>>r>>c>>n;
    char arr[r+2][c+2]={'.'},cpy[r+2][c+2]={'.'};
    
    for(i=1;i<r+1;i++)
        for(j=1;j<c+1;j++)
        {
           cin>>arr[i][j];  
           cpy[i][j]=arr[i][j];
        }
        if(n==1)
    {
       for(i=1;i<r+1;i++)
       {
           for(j=1;j<c+1;j++)
        {
           cout<<arr[i][j];  
        } 
        cout<<'\n';
       }
        return 0;
    }
    
    
    if(n==2 || n==4)
    {
       for(i=0;i<r;i++)
       {
           for(j=0;j<c;j++)
        {
           cout<<"O";  
        } 
        cout<<'\n';
       }
        return 0;
    }

    
    
   if(n==3)
    {
            memset(arr,'O', sizeof(arr)); 
              for(k=1;k<r+1;k++)
              {
                  for(j=1;j<c+1;j++)
                {
                   if(cpy[k][j]=='O')
                   {
                       arr[k][j]='.';arr[k][j+1]='.';arr[k][j-1]='.';arr[k-1][j]='.';arr[k+1][j]='.';
                 }
                }
        }
    
    for(i=1;i<r+1;i++)
              {
                  for(j=1;j<c+1;j++)
                {
                      cout<<arr[i][j];
                 }
                     cout<<'\n';
              }
    return 0;
   }
    
    
    n=n%4;
    if(n==2 || n==0)
    {
         for(i=0;i<r;i++)
       {
           for(j=0;j<c;j++)
        {
           cout<<"O";  
        } 
        cout<<'\n';
       }
        return 0;
    }
   
    if(n==3 || n==1)
    {
           memset(arr,'O', sizeof(arr)); 
              for(k=1;k<r+1;k++)
              {
                  for(j=1;j<c+1;j++)
                {
                   if(cpy[k][j]=='O')
                   {
                       arr[k][j]='.';arr[k][j+1]='.';arr[k][j-1]='.';arr[k-1][j]='.';arr[k+1][j]='.';
                 }
                }
        }
    
          for(k=1;k<r+1;k++)
              {
                  for(j=1;j<c+1;j++)
                {
                      cpy[k][j]=arr[k][j];
                }
        }
       if(n==3){ 
    for(i=1;i<r+1;i++)
              {
                  for(j=1;j<c+1;j++)
                {
                      cout<<arr[i][j];
                 }
                     cout<<'\n';
          }
           return 0;
       }
        
    
        
          memset(arr,'O', sizeof(arr)); 
              for(k=1;k<r+1;k++)
              {
                  for(j=1;j<c+1;j++)
                {
                   if(cpy[k][j]=='O')
                   {
                       arr[k][j]='.';arr[k][j+1]='.';arr[k][j-1]='.';arr[k-1][j]='.';arr[k+1][j]='.';
                 }
                }
        }
    copy(p1,p2,p3);
    for(i=1;i<r+1;i++)
              {
                  for(j=1;j<c+1;j++)
                {
                      cout<<arr[i][j];
                 }
                     cout<<'\n';
    }
    return 0;
    
    
    }
    
    
}
