#include<iostream>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    int arr1[50];
    for(int i=0;i<n;i++){
        cin>>arr1[i];
    }
    int arr2[50];
    for(int j=0;j<m;j++){
        cin>>arr2[j];
    }
    int i=0,j=0;
    while(i<n && j<m){
        if(arr1[i]<arr2[j]){
            i++;
        }
       else if(arr1[i]==arr2[j]){
            cout<<arr2[j]<<endl;
            i++;
       j++;
        }
        else{
            j++;
        }

    }
}
