#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[10],avg=0;
    for(int i=0;i<=9;i++)
    cin>>a[i];
    for(int i=0;i<=9;i++)
    avg=avg+a[i];
    cout<<(float)avg/10.0;
}