#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[10];
    for (int i = 0; i <10; i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<9;i++)
    {
        for(int j=i+1;j<=9;j++)
        {
            if(a[i]>a[j])
            {
                int temp=a[j];
                a[j]=a[i];
                a[i]=temp;
            }
        }
    }
    for(int i=0;i<=9;i++)
    {
        cout<<a[i]<<endl;
    }
}