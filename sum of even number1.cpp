#include<iostream>
using namespace std;
int main()
{
    int n,i=1,sum=0;
    cout<<"enter the number: ";
    cin>>n;
    while(i<=n){
        if(i%2==0){
            sum=sum+i;
        }
        i++;
    }
    cout<<"total sum="<<sum;
    return 0;
}
