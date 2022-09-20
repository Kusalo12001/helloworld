#include<iostream>
using namespace std;
int factorial(int n){
    int fact=1;
    int i=1;
    while(i<=n){
        fact=fact*i;
        i++;
    }
    return fact;
}
int main(){
    int n,r;
    cin>>n>>r;
    factorial(n);
    factorial(r);
    factorial(n-r);
    int output=factorial(n)/(factorial(r)*factorial(n-r));
    cout<<output;
}
