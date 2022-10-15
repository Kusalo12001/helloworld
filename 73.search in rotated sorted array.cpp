#include<iostream>
#include <bits/stdc++.h>
using namespace std;

int getPivot(int arr[],int n)
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
int BinarySearch(int arr[],int s,int e,int key)
{
    int start =s;
    int end =e;
    int mid=start+(end-start)/2;
    while(start<=end){
        if(arr[mid]==key){
            return mid;
        }
        if(arr[mid]<key){
            start=mid+1;
        }
        else {
            end=mid-1;
        }
        mid=start+(end-start)/2;
    }
    return -1;
}
int findPosition(int arr[], int n, int k)
{
    // Write your code here.
    // Return the position of K in ARR else return -1.
    int Pivot= getPivot(arr,n);
    if(k>=arr[Pivot] && k<=arr[n-1]){
            //BS in second line
        return BinarySearch(arr,Pivot,n-1,k);
    }
    else{
        //BS in first line
        return BinarySearch(arr,0,Pivot-1,k);
    }
}
int main()
{
    int arr[5]={3,7,9,1,2};
    //int MinPivot=Pivot(arr,5,2);
    int p=findPosition(arr,5,2);
    cout<<p;
}
