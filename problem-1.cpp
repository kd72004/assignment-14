#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[10],sum=0;
    for(int i=0;i<=9;i++)
    cin>>a[i];
    for(int i=0;i<=9;i++)
    sum+=a[i];
    cout<<sum<<endl;
}