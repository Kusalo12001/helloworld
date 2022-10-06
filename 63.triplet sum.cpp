#include<iostream>
using namespace std;
int Triplet(int arr[],int n,int s)
{

    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            for(int k=j+1;k<n;k++){
                if(arr[i]+arr[j]+arr[k]==s){
                    cout<<arr[i]<<" "<<arr[j]<<" "<<arr[k]<<endl;
                }
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
    Triplet(arr,n,s);
    /*for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            for(int k=j+1;k<n;k++){
                if(arr[i]+arr[j]+arr[k]==s){
                    cout<<arr[i]<<" "<<arr[j]<<" "<<arr[k];
                }
            }
        }
    }*/
}
