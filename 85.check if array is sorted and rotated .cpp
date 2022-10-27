#include<iostream>
using namespace std;
bool check(int arr[],int n)
{
    int count=0;
    for(int i=1;i<n;i++){
        if(arr[i-1]>arr[i]){
            count++;
        }
    }
   if(arr[n-1]>arr[0]){
        count++;
    }
    return count<=1;

}
int main()
{
    int arr1[5]={1,2,3,5,6};
    int arr2[]={3,4,5,1,2};
    int arr3[]={1,1,1};
    int arr4[]={3,4,5,1,6};
    cout<<check(arr1,5)<<endl;
    cout<< check(arr2,5)<<endl;
    cout<< check(arr3,3)<<endl;
    cout<< check(arr4,5)<<endl;
}
