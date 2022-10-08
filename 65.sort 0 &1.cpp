#include<iostream>
using namespace std;
int printarray(int arr[],int n)
{
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
void Sort(int arr[],int n)
{
    int i=0;
    int j=n-1;
    while(i<j){
        while(arr[i]==0){
            i++;
        }
        while(arr[j]==1){
            j--;
        }
            swap(arr[i],arr[j]);
            i++;
            j--;
    }
}
int main()
{
    int n;
    cin>>n;
    int arr[50];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    Sort(arr,n);
    printarray(arr,n);
}
