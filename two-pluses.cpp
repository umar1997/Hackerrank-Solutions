#include<bits/stdc++.h>
using namespace std;
int main()
{ 
    vector<int> v;int *p1,*p2,*p3;
    int n,m,dep=0;
    cin>>n>>m;
    int arr[n][m],cpy[n][m];char arr1[n][m];
    char c;
    int i,j,k,f=0;
    p1=&arr[0][0];
    p2=&arr[n-1][m-1];p2++;
    p3=&cpy[0][0];
    for(i=0;i<n;i++)
    {
    
            cin>>arr1[i];
      
    }
    
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            if(arr1[i][j]=='G')
            {
                arr[i][j]=0;
                f++;
            }
            else
                arr[i][j]=-1;
            cpy[i][j]=arr[i][j];
        }   
    }
    
    if(f<2)
    {
        cout<<0;
        return 0;
    }
    v.push_back(1);
    for(i=1;i<n-1;i++)
    {
        for(j=1;j<m-1;j++)
        {
            if(arr[i][j]!=-1 && arr[i][j-1]!=-1 && arr[i][j+1]!=-1 && arr[i-1][j]!=-1 && arr[i+1][j]!=-1)
                arr[i][j]=1;
             //   cout<<arr[i][j];
        }
     //   cout<<'\n';
    }
    
  /*   for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {   cout<<arr[i][j];
        
    }
    cout<<'\n';
}*/
    
   int l,r,u,d,minn,i1,j1,k1,minnn;
    for(i=1;i<n-1;i++)
    {
        for(j=1;j<m-1;j++)
        {   dep=0;
            if(arr[i][j]==1)
            {   copy(p1,p2,p3);
                
         
                
                l=0;r=0;u=0;d=0;minn=0;
                for(k=j+1;k<m;k++)
                {
                     if(arr[i][k]==-1)
                         break;
                     r++;
                 }
               for(k=j-1;k>=0;k--)
               {
                   if(arr[i][k]==-1)
                       break;
                    l++;
               }
             for(k=i-1;k>=0;k--)
               {
                   if(arr[k][j]==-1)
                        break;
                       u++;
            
               }
             for(k=i+1;k<n;k++)
             {
                 if(arr[k][j]==-1)
                    break;
                 d++;
             }
             minn=min(l,min(r,min(u,d)));
           //  cout<<r<<l<<u<<d<<'\n';
      //       l=minn;r=minn;u=minn;d=minn;
       start:      copy(p1,p2,p3);
             cpy[i][j]=-1;
               for(k=j+1;k<=j+minn;k++)
                {
                     cpy[i][k]=-1;
                 }
               for(k=j-1;k>=j-minn;k--)
               {
                  cpy[i][k]=-1;
               }
             for(k=i-1;k>=i-minn;k--)
               {
                   cpy[k][j]=-1;
               }
             for(k=i+1;k<=i+minn;k++)
             {
                 cpy[k][j]=-1;
             }
             v.push_back((4*minn)+1);
     //        cout<<'\n'<<4*minn+1;
             
             
             
                for(i1=1;i1<n-1;i1++)
    {
        for(j1=1;j1<m-1;j1++)
        {   
            if(cpy[i1][j1]==1)
            {  l=0;r=0;u=0;d=0;minnn=0;
                for(k1=j1+1;k1<m;k1++)
                {
                     if(cpy[i1][k1]==-1)
                     break;
                         r++;
                  
                 }
               for(k1=j1-1;k1>=0;k1--)
               {
                   if(cpy[i1][k1]==-1)
                   break;
                       l++;
                
               }
             for(k1=i1-1;k1>=0;k1--)
               {
                   if(cpy[k1][j1]==-1)
                       break;
                       u++;
               
               }
             for(k1=i1+1;k1<n;k1++)
             {
                 if(cpy[k1][j1]==-1)
                 break;
                     d++;
               
             }
             minnn=min(l,min(r,min(u,d)));
             
             v.push_back(((4*minn)+1)*((4*minnn)+1));
            
        //     cout<<" "<<((4*minn)+1)*((4*minnn)+1);
            }
        }
                }
             
             
              if(minn>1)
             {
                 minn--;
                 goto start;
             }
             
             
             
             
            }
        }
    }
  //  for(vector<int>::iterator it=v.begin();it<v.end();it++)
  //  cout<<*it;
   cout<<*max_element(v.begin(),v.end());
    
    return 0;
}
