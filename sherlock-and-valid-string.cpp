#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    string s;
    ll arr[26]={0};
    cin>>s;
    ll len=s.length();
    for(ll i=0;i<len;i++)
    {
        arr[int(s[i])-97]++;
    }
  multiset<ll>se;
    for(int i=0;i<26;i++)
    {  //cout<<arr[i]<<'\n'; 
        if(arr[i]!=0)
        se.insert(arr[i]);
    }
    se.erase(0);
    multiset<ll>:: iterator itr=se.end();
    itr--;
  /*  for(itr=se.begin();itr!=se.end();itr++)
    {
        cout<<*itr<<'\n';
    }*/
    ll a=*(se.begin());
    
    ll b=*(itr);
    ll c1=se.count(a);
    ll c2=se.count(b);
    if(a==b){
       cout<<"YES"<<'\n';
        return 0; 
    }
    if(se.size()==1)
    {
        cout<<"YES"<<'\n';
        return 0;
    }
    if((c1+c2)!=se.size()){
        cout<<"NO"<<'\n';
        return 0;
    }
    if(abs(a-b)>=2 && ((c1==1 && a==1) ||( c2==1 && b==1)) && (c1+c2==se.size()))
    {
        cout<<"YES"<<'\n';
        return 0;
    }
    if(abs(a-b)>=2)
    {
        cout<<"NO"<<'\n';
        return 0;
    }
    if(c1>1 && c2>1 && a!=b)
    {
        cout<<"NO"<<'\n';
        return 0;
    }
    cout<<"YES"<<'\n';
    
    return 0;
}
