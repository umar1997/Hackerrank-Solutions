#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{   
    int t;
    cin>>t;
    ll n,k,i,j,p,l;
    for(int i=1;i<=t;i++)
    {
        cin>>n>>k;
       // ll arr[n+1];
        if(k==0)
        {
            for(j=1;j<=n;j++)
                cout<<j<<" ";
        }
        else if(n%(2*k)!=0)
        {
            cout<<"-1";
        
        }
       
        else{
            for(j=1;j<=n;j=j+2*k)
            {
                p=j+k;
                for(l=0;l<k;l++)
                {
                    cout<<p<<" ";
                    p++;
                }
                p=j;
                for(l=0;l<k;l++)
                {
                    cout<<p<<" ";
                    p++;
                }
            }
        }
        cout<<'\n';
        
    }
    return 0;
}
