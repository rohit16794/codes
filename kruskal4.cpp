#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

//ll men[10000],women[10000];

ll root(ll i,ll *arr)
{
    while(i!=arr[i])
    {
        arr[i]=arr[arr[i]];
        i=arr[i];
    }
    return i;
}

void set_union(ll a,ll b,ll *arr)
{
    ll root_a=root(a,arr);
    ll root_b=root(b,arr);
   // cout<<a<<" "<<b<<"\n";
    //cout<<root_a<<root_b<<"\n";
    if(root_b==root_a)
    {
        return;
    }
    else
        arr[root_a]=root_b;
}



int main()
{
    ll n,m,x,y,type;
    cin>>n>>m;
    ll men[100000],women[100000];

    for(ll i=0;i<=n;i++)
    {
        men[i]=i;
        women[i]=i;
    }

    pair<ll,pair<ll,ll> > p[m];
    ll typearray[m];
    for(ll i=0;i<m;i++)
    {
        cin>>x>>y>>type;
        typearray[i]=type;
        p[i]=make_pair(1,make_pair(x,y));
    }

    sort(p,p+m);
    ll check;
    ll countmen,countwomen;
    countwomen=countmen=0;
    ll ans=0;

    for(ll i=0;i<m;i++)
    {   
        check=typearray[i];
        if(check==1)
        {
            x=p[i].second.first;
            y=p[i].second.second;

            if(root(x,men)==root(y,men))
                {++ans;}
            else
            {
                set_union(x,y,men);
            }
            //cout<<root(x,men)<<" "<<root(y,men)<<"\n";
        }
        else
         if(check==2)
        {
            x=p[i].second.first;
            y=p[i].second.second;

            if(root(x,women)==root(y,women))
                {++ans;}
            else
            {
                set_union(x,y,women);
            }
        }
        else
        {
            x=p[i].second.first;
            y=p[i].second.second;
            //cout<<x<<y;
            if(root(x,men)==root(y,men) && root(x,women)==root(y,women))
                {++ans;
                }
            else
            {
                set_union(x,y,men);
                           set_union(x,y,women);}
        
        }   
    }

    for(ll i=0;i<m;i++)
    {
        ;//cout<<p[i].first.first;;
    }
//cout<<countwomen<<" "<<countmen;
  for(ll i=1;i<=n;i++)
  {
    //cout<<men[i]<<" ";
  }
cout<<"\n";
   for(ll i=1;i<=n;i++)
  {
    //cout<<women[i]<<" ";
  }
  cout<<ans;
    return 0;
}