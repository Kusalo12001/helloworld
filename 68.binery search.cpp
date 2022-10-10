#include<iostream>
using namespace std;
int BinarySearch(int arr[],int n,int key)
{
    int start =0;
    int end =n-1;
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


int main()
{
    int even[6]={4,8,15,17,26,30};
    int odd[5]={5,9,16,26,30};
    int index1=BinarySearch(even,6,4);
    int index2=BinarySearch(odd,5,5);
    cout<<index1<<endl;
    cout<<index2;
}

