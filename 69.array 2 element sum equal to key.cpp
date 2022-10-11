#include<iostream>
using namespace std;
bool Search(int arr[],int n,int key)
{
    for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                if(arr[i]+arr[j]==key){
                return 1;
                }
        }
    }
    return 0;
}
int main()
{
    int key;
    cin>>key;
    int arr[10]={54,65,74,75,90,4,23,54,6,3};
    /*for(int i=0;i<n;i++){
        cin>>arr[i];
    }*/
    bool found=Search(arr,10,key);
    if(found){
        cout<<"key is present"<<endl;
    }
    else{
        cout<<"key is absent";
    }
}
