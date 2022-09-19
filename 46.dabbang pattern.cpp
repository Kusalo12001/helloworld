#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int i=1;
    while(i<=n){
        //1st triangle
        int j=1;
        while(j<=n-i+1){
            cout<<j;
            j++;
        }
        //2nd triangle
        int k=1;
        while(k<=i-1){
            cout<<"*";
            k++;
        }
        //3rdntriangle
        int l=1;
        while(l<=i-1){
            cout<<"*";
            l++;
        }
        int m=n-i+1;
        while(m){
            cout<<m;
            m--;
        }
        cout<<endl;
        i++;
    }
}
