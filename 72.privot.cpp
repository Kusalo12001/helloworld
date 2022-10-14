#include<iostream>
using namespace std;
int Pivot(int arr[],int n,int key)
{
    int s=0;
    int e=n-1;
    int mid=s+(e-s)/2;
    while(s<e){
        if(arr[mid]<arr[0]){
            e=mid;
        }
        else{
            s=mid+1;
        }
        mid = s+(e-s)/2;
    }
    return s;

}

int main()
{
    int arr[5]={7,9,1,2,3};
    int MinPivot=Pivot(arr,5,2);
    cout<<MinPivot;
}
