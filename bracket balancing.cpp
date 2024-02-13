#include<bits/stdc++.h>
using namespace std;
int Swap(string s)
{
    int ans=0,cnt=0,n=s.size();
    for(int i=0;i<n;i++)
    {
        if(s[i]=='[')
        {
            cnt++;
        }
        else
        {
            cnt--;
        }
        if(cnt<0)
        {
            int j=i+1;
            while(j<n)
            {
                if(s[j]=='[')
                {
                    break;
                }
                j++;
            }
             ans+=j-i;
            cnt=1;
            char ch=s[j];
            for(int k=j;k>i;k--)
            {
                s[k]=s[k-1];
            }
            s[i]=ch;
        }
    }
    return ans;
}
int main()
{
     string s = "[]][][";
    cout << Swap(s) << "\n";

    s = "[[][]]";
    cout << Swap(s) << "\n";

    return 0;
}
