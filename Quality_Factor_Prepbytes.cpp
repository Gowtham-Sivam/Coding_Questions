#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    int current = 0;
    long long moves = 0;
    for(int i=0;i<n;i++)
    {
        moves += abs(arr[i]-current);
        current = arr[i];
    }
    cout<<moves<<"\n";
    return 0;
}