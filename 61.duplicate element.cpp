#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[50];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int ans=0;
    for(int i=0;i<n;i++){
        ans=ans^arr[i];
    }
    for(int i=0;i<n;i++){
        ans=ans^i;
    }
    cout<<ans;
}
