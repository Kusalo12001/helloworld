#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int pv=1;
    int ans =0;
    while(n!=0){
        int i=1;
        i=n%10;
        ans=ans+i*pv;
        n=n/10;
        pv=2*pv;
    }
    cout<<ans;
}
