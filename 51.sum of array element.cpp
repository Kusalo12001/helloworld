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
    for(int i=0;i<n;i++){
        cout<<arr[i]<<endl;
    }
    int sum=0;
    for(int i=0;i<n;i++){
    sum=sum+arr[i];
    }
    cout<<"sum:"<<sum;
}
