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
    //odd element
    int i=0;
    int r=(n-1)/2;
    int val=1;
    while(i<=r){
        arr[i]=val;
        i++;
        val+=2;
        cout<<arr[i];
    }




}
