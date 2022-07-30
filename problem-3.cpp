#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[10],even_sum=0,odd_sum=0;
    for(int i=0;i<=9;i++)
    cin>>a[i];
    for(int i=0;i<=9;i++)
    {
        if(a[i]%2)
            odd_sum=odd_sum+a[i];
        else
            even_sum=even_sum+a[i];
    }
    cout<<odd_sum<<endl;
    cout<<even_sum<<endl;
}