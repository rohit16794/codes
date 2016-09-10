#include <bits/stdc++.h>
using namespace std;

void permute(string s,int l, int r,vector<string> *v)
{
    if(l==r)
    {
        (*v).push_back(s);
        //cout<<s<<" ";
        //return;
    }
    else
    {
        for(int i=l;i<=r;i++)
        {
            swap(s[l],s[i]);
            permute(s,l+1,r,v);
            swap(s[l],s[i]);
        }
    }
}

int main() {
	//code
	int t;
	cin>>t;
	string s;
	while(t--)
	{
	    cin>>s;
    vector<string>v;
	    int len=s.length();
	    permute(s,0,len-1,&v);
	    sort(v.begin(),v.end());
	    
	    for(int i=0;i<v.size();i++)
	    cout<<v[i]<<" ";
	    cout<<"\n";
	}

	return 0;
}