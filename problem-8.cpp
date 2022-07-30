#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[10];
    for(int i=0;i<=9;i++)
    cin>>a[i];
    int min1=a[1],min2=0;
    for(int i=0;i<=9;i++)
    {
        if(a[i]<min1)
        {
            min2=min1;
            min1=a[i];
        }
    }
    cout<<"second smallest number -> "<<min2<<endl;
}