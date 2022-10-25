#include<iostream>
using namespace std;
int movezeros(int arr[],int n)
{
    //non zero move left side
    int i=0;
    for(int j=0;j<n;j++){
        if(arr[j] != 0){
            swap(arr[j],arr[i]);
            i++;
        }
    }
}
void print(int arr[],int n)
{
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

}
int main()
{
    int arr[]={0,1,0,3,12,0};
    movezeros(arr,6);
    print(arr,6);
}
