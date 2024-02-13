#include<bits/stdc++.h>
using namespace std;
int  micetohole(int mi[],int h[],int n,int m)
{
    if(n!=m)
    {
        return -1;
    }
    sort(mi,mi+n);
    sort(h,h+m);
    int Max=0;
    for(int i=0;i<n;++i)
    {
     if(Max<abs(mi[i]-h[i]))
     {
         Max=abs(mi[i]-h[i]);
     }
    }
    return Max;
}
int main()
{
     int mices[] = { 4, -4, 2 };

    // Position of holes
    int holes[] = { 4, 0, 5 };

    // Number of mouses
    int n = sizeof(mices) / sizeof(mices[0]);

    // Number of holes
    int m = sizeof(holes) / sizeof(holes[0]);

    // The required answer is returned
    // from the function
    int minTime = micetohole(mices, holes, n, m);

    cout << "The last mouse gets into the hole in time:"
         << minTime << endl;

    return 0;
}
