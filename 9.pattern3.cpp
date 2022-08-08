#include<iostream>
using namespace std;
int main()
{

    int n,count=1;
    cout<<"enter n: ";
    cin>>n;
    int i = 1;
    while(i<=n){
        int k=1;
        while(k<=n-i){
            cout<<" ";
            k++;
        }
        int j=1;
        while(j<=i){
            cout<<count;
            j++;
            count++;
        }
         i++;
         cout<<endl;
    }

}
