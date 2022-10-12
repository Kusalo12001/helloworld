#include<iostream>
using namespace std;
int LastPosition(int arr[],int n,int key)
{
    int s=0;
    int e=n-1;
    int ans=-1;
    int mid=s+(e-s)/2;
    while(s<=e){
        if(arr[mid]==key){
            ans=mid;
            s=mid+1;
        }
        else if(arr[mid]<key){
            s=mid+1;
        }
        else{
            e=mid-1;
        }
        mid=s+(e-s)/2;
    }
    return ans;
}
int FirstPosition(int arr[],int n,int key)
{
    int s=0;
    int e=n-1;
    int ans=-1;
    int mid=s+(e-s)/2;
    while(s<=e){
        if(arr[mid]==key){
            ans=mid;
            e=mid-1;
        }
        else if(arr[mid]<key){
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
    int arr[10]={1,3,4,5,5,5,5,6,7,9};
    //int FirstPosition(arr,10,5);
    int index1=FirstPosition(arr,10,5);
    int index2=LastPosition(arr,10,5);
    int numberofocc=index2-index1;
    cout<<index1<<endl<<index2<<endl;

}

