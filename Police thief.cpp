#include<bits/stdc++.h>
using namespace std;
int policethief(char a[],int n,int k)
{
    int res=0;
    vector<int>thi;
    vector<int>pol;
    for(int i=0;i<n;i++)
    {
        if(a[i]=='P')
        {
            pol.push_back(i);
        }
        else if(a[i]=='T')
        {
            thi.push_back(i);
        }
        int l=0,r=0;
        while(l<thi.size() && r<pol.size())
        {
            if(abs(thi[l]-pol[r])<=k)
            {
                l++;
                r++;
                res++;
            }
            else if(thi[l]<pol[r])
            {
                l++;
            }
            else
            {
                r++;
            }
        }
    }
    return res;
}
int main()
{
        int k, n;
    char arr1[] = { 'P', 'T', 'T', 'P', 'T' };
    k = 2;
    n = sizeof(arr1) / sizeof(arr1[0]);
    cout << "Maximum thieves caught: "
         << policethief(arr1, n, k) << endl;

    char arr2[] = { 'T', 'T', 'P', 'P', 'T', 'P' };
    k = 2;
    n = sizeof(arr2) / sizeof(arr2[0]);
    cout << "Maximum thieves caught: "
         << policethief(arr2, n, k) << endl;

    char arr3[] = { 'P', 'T', 'P', 'T', 'T', 'P' };
    k = 3;
    n = sizeof(arr3) / sizeof(arr3[0]);
    cout << "Maximum thieves caught: "
         << policethief(arr3, n, k) << endl;
    return 0;
}
