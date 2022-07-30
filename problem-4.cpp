#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a[10];
    for (int i = 0; i <= 9; i++)
        cin >> a[i];

    int max = a[1];

    for (int i = 0; i <= 9; i++)
    if(max<a[i])
    max=a[i];

    cout<<max<<endl;
}