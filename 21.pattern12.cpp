#include<iostream>
using namespace std;
int main()
{
int n;
cout<<"enter n";
cin>>n;
int i=1;
while(i<=n){
    int j=1;
    int k=i;
    while(j<=i){
        //cout<<i-j+1;
        cout<<k;
        k--;
       j++;
    }
    cout<<endl;
    i++;
    }
}
