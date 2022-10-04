#include<iostream>
using namespace std;
int main()
{
    int n,i;
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
    if(ans==arr[i] || -ans==arr[i]){
        cout<<"false";
    }
    else{
        cout<<"true";
    }
    }
}
