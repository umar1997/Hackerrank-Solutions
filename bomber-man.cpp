/*First four cases are different and they are repeated .*/
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    int r,c;
    ll n,i,j,l,m,k;
    cin>>r>>c>>n;
    char arr[r+2][c+2]={'.'},cpy[r+2][c+2]={'.'};       /*cpy[][] is the copy of the array arr[][]*/
                                                        /* One entire layer is to be left around the array so there is no problem when dealing at boundaries*/
    for(i=1;i<r+1;i++)
        for(j=1;j<c+1;j++)
        {
           cin>>arr[i][j];  
           cpy[i][j]=arr[i][j];
        }
        if(n==1)                                       /* If n==1 then array is to be printed as it is*/
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
    
    
    if(n==2 || n==4)                            /* Only O's are supposed to be printed in this case*/
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

    
    
   if(n==3)                                 /*Bomb bombartment takes places in this case*/
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
    
    
    n=n%4;                                            /*Now we just need to distinguish between four repeated cases*/
    if(n==2 || n==0)                                  /* array with all O's needs to be printed in this case*/
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
   
    if(n==3 || n==1)                              /*n==3 is similar to n==3 before the operation n=n%4*/
    {                                             /*However for n==1 here we need to perform the same steps twice as did for n==3*/
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
    
          for(k=1;k<r+1;k++)             /*Copying the array arr[][] into cpy[][]*/
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
        
    
        
          memset(arr,'O', sizeof(arr));                /*Repeating the same process once more*/
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
    
    
}
