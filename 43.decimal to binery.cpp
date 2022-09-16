#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int pv=1;
    int ans=0;
    while(n!=0){
    int i;
    i=n%2;
    ans=ans+i*pv;
    n=n/2;
    pv=pv*10;
    }
    cout<<ans;
}
