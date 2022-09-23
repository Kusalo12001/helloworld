#include<iostream>
using namespace std;
int fibonacci(int n)
{
    int a=0,b=1,c;
    while(b<n){
    c=a+b;
    a=b;
    b=c;
    }
    if(n==c){
        cout<<"true";
    }
    else{
        cout<<"fasle";
    }
}
int main()
{
    int n,c;
    cin>>n;
    fibonacci(n);

    //cout<<fibonacci;
}
