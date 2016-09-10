#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;

    long long len = s.length();

    int zeroes,ones;
    zeroes=ones=0;

    for(int i=1;i<len;i++)
    {
        if(s[i]==0)
        {
            if(s[i-1]==0)
                ++zeroes;

            if(zeroes>=6)
            {
                cout<<"Sorry, sorry!";return 0;
            }
        }
        else
            zeroes=0;
    }

    for(int i=1;i<len;i++)
    {
        if(s[i]==1)
        {
            if(s[i-1]==1)
            {
                ++ones;

                if(ones>=6)
                {
                    cout<<"Sorry, sorry!";return 0;
                }
            }
            else
                ones=0;
        }
    }
cout<<"Good luck!";
    return 0;
}