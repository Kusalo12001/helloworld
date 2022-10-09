#include<iostream>
using namespace std;
//main part of linear search
int linear(int *arr[],int n,int t)
{

    for(int i=0;i<n;i++){
        if(*arr[i]==t){
            return i;
        }
    }
    return -1;
}
/*int main()
{
    int n;
    cin>>n;
    int t;
    cin>>t;
    int arr[8]={1,4 ,5,8,9,2,0,7};
    //for(int i=0;i<n;i++){
      //  cin>>arr[i];
    //}
    linear(&arr,n,t);
}*/
