#include<bits/stdc++.h>
using namespace std;
struct job
{
    char id;
    int dead;
    int profit;
};
bool comparison(job a,job b)
{
    return (a.profit>b.profit);
}
void printjob(job a[],int n)
{
    sort(a,a+n,comparison);
    int result[n];
    bool slot[n];
    for(int i=0;i<n;i++)
    {
        slot[i]=false;
    }
    for(int i=0;i<n;i++)
    {
        for(int j=min(n,a[i].dead)-1;j>=0;j--)
        {
            if(slot[j]==false)
            {
                result[j]=i;
                slot[j]=true;
                break;
            }
        }
    }
    for(int i=0;i<n;i++)
    {
        if(slot[i])
        {
            cout<<a[result[i]].id<<" ";
        }
    }
}
int main()
{
    job a[] = { { 'a', 2, 100 },
                  { 'b', 1, 19 },
                  { 'c', 2, 27 },
                  { 'd', 1, 25 },
                  { 'e', 3, 15 } };

    int n = sizeof(a) / sizeof(a[0]);
    cout << "Following is maximum profit sequence of jobs "
            "\n";

    // Function call
    printjob(a, n);
    return 0;
}
