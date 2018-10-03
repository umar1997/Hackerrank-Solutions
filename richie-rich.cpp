#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    string s,s1,s2,s3;
    ll n,k,q=0,i,j;
    cin>>n>>k;
    cin>>s;
    if(n%2==0)
    {
        s1=s.substr(0,n/2);
        s2=s.substr(n/2,n/2);
    }
    else
    {
        s1=s.substr(0,n/2);
        s3=s.substr(n/2,1);
        s2=s.substr(n/2+1,n/2);
    }
    reverse(s2.begin(),s2.end());
    for(i=0;i<n/2;i++)
    {
        if(s1[i]!=s2[i])
            q++;
    }
    if(k<q)
    {
        cout<<"-1";
        return 0;
    }
    for(i=0;i<n/2;i++)
    {    if(k<q)
        {
            cout<<"-1";
             return 0;
        }
         if(s1[i]==s2[i] && s1[i]!='9' && s2[i]!='9' && k-2>=q)
         {
              s1[i]='9';
             s2[i]='9';
             k--;k--;
         }
         if(s1[i]!=s2[i])
         {
             if((s1[i]=='9' || s2[i]=='9') && k-1>=q-1)
             {
                 s1[i]='9';
                 s2[i]='9';
                 k--;q--;
             }
             if((s1[i]!='9' && s2[i]!='9') && k-2>=q-1)
             {
                 s1[i]='9';
                 s2[i]='9';
                 k--;q--;k--;
             }
             if((s1[i]!='9' && s2[i]!='9') && k-2<q-1 && k-1>=q-1)
             {
                 s1[i]=max(s1[i],s2[i]);
                 s2[i]=max(s1[i],s2[i]);
                 k--;q--;
             }
             
             
         }
    }
    if(k>=1)
        s3="9";
    reverse(s2.begin(),s2.end());
    if(n%2!=0)
        cout<<s1+s3+s2;
    else
        cout<<s1+s2;
    
    return 0;
}
