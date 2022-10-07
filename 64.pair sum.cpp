#include<iostream>
using namespace std;
int Pair(int arr[],int n,int s)
{

    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
                if(arr[i]+arr[j]==s){
                    cout<<arr[i]<<" "<<arr[j]<<endl;
                }
        }
    }
}
int main()
{
    int n;
    int s;
    cin>>n;
    cin>>s;
    int arr[50];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    //sort(arr.begin(),arr.end());
    Pair(arr,n,s);
    /*for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
                if(arr[i]+arr[j]==s){
                    cout<<arr[i]<<" "<<arr[j];
                }
        }
    }*/
}

