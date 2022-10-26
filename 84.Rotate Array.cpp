 #include<iostream>
 using namespace std;
 int Reverse(int arr[],int k,int n)
 {

     int temp[n];
     for(int i=0;i<n;i++){
        temp[(i+k)%n]=arr[i];
     }
for (int i = 0; i < n; i++) {
        arr[i] = temp[i];
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
     int arr[]={5,6,8,9};
     Reverse(arr,2,4);
     print(arr,4);
 }
