#include<iostream>
using namespace std;
void reverse(int arr[],int n)
{
    for(int i=0;i<n;i+=2){
        if(i+1<n){
            swap(arr[i],arr[i+1]);
        }
    }

}
void printArray(int arr[],int n)
{
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main()
{
    int n,r;
    cin>>n>>r;
    int arr[50];
    int brr[50];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<r;i++){
        cin>>brr[i];
    }
    //int arr[10]={1,2,3,4,5,6,7,8,9,10};
    //int brr[5]={54,94,32,67,90};
    reverse(arr,n);
    reverse(brr,r);
    printArray(brr,r);
    printArray(arr,n);
}

