#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter n: ";
    cin>>n;
    int i=1;
    while(i<=n){
            // space print
        int k=1;
        while(k<=n-i){
            cout<<" ";
            k++;
        }
    //1st triangle
        int j=1;
        while(j<=i){
            cout<<"*";
            j++;
        }
        //2nd triangle
        int l=i-1;
        while(l){
            cout<<"*";
            l--;
        }
        i++;
        cout<<endl;
    }
}
