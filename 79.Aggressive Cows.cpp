#include<iostream>
//#include<vector>
using namespace std;
bool isPossible(int arr[],int n,int k,int mid)
{
    int cowcount=1;
    int distance=arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]-distance>=mid){
            cowcount++;
            if(cowcount==k){
                return true;
            }
            distance=arr[i];
        }
    }
    return false;
}
int aggressiveCows(int arr[],int n,int k)
{

    int s=0;
    int maxi=-1;
    for(int i=0;i<n;i++){
        maxi=max(maxi,arr[i]);
    }
    int e=maxi;
    int mid=s+(e-s)/2;
    int ans=-1;
    while(s<=e){
        if(isPossible(arr,n,k,mid)){
            ans=mid;
            s=mid+1;
        }
        else{
            e=mid-1;
        }
        mid=s+(e-s)/2;
    }
    return ans;
}
int main()
{
    int arr[]={1,2,3,4,6};
    //sort(arr.begin(),arr.end());
    cout<<"minimum leargest distence: "<<aggressiveCows(arr,6,2);
}
