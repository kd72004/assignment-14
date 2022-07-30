#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[10];
    for(int i=0;i<=9;i++)
    cin>>a[i];
    int max=a[1],max2;
    for(int i=0;i<=9;i++)
    {
        if(max<a[i])
        {
            max2=max;
            max=a[i];
        }
        
    }
    cout<<"second largest number -> "<<max2<<endl;
    
}