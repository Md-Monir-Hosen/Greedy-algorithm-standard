#include<bits/stdc++.h>
using namespace std;
void ezyptian(int n,int d)
{
    if(d==0 || n==0)
    {
        return;
    }
    if(d%n==0)
    {
        cout<<"1/"<<d/n;
        return ;
    }
    if(n%d==0)
    {
        cout<<n/d;
        return;
    }
    if(n>d)
    {
        cout<<n/d<<"+";
        ezyptian(n%d,d);
        return;
    }
    int x=d/n+1;
    cout<<"1/"<<x<<"+";
    ezyptian(n*x-d,d*x);
}
int main()
{
     int numerator = 6, denominator = 14;
    cout << "Egyptian Fraction representation of "
         << numerator << "/" << denominator << " is"
         << endl;
    ezyptian(numerator, denominator);
    return 0;
}
