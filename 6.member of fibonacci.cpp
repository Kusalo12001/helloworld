#include<iostream>
using namespace std;
int main()
{
    int a=0,b=1,temp,n;
    cout<<"enter the number n: ";
    cin>>n;
    while(b<n){
        temp=a+b;
        a=b;
        b=temp;
    cout<<"fibonacci series: "<<temp<<endl;
    }
    if(n==temp){
        cout<<"number is fibonacci"<<endl;
    }
    else{
        cout<<"number is not fibonacci"<<endl;
    }
}
