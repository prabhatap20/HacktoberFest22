#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        int arr[1000001],i;
        for(i=0;i<n;i++)
        cin>>arr[i];
        sort(arr,arr+n);
        int ans=k- arr[0];
        if(ans<=0)
        cout<<"0"<<endl;
        else
        cout<<ans<<endl;
    }
}
