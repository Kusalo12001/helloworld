#include<iostream>
using namespace std;
int getmin(int arr[],int n){
int mini=INT_MAX;
    for(int i=0;i<n;i++){
            mini=min(mini,arr[i]);
            //other process
        //if(arr[i]<min){
         //   min=arr[i];
        //}
    }
return mini;
}
int getmax(int arr[],int n){
    int maxi=INT_MIN;
    for(int i=0;i<n;i++){
            maxi=max(maxi,arr[i]);
    //other process
        //if(arr[i]>max){
        //    max=arr[i];
        //}
    }
    return maxi;
}
int main()
{
    int n;
    cin>>n;
    int arr[10];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"min:"<<getmin(arr,n)<<endl<<"max:"<<getmax(arr,n);
}
