#include<iostream>
using namespace std;
    bool isPrime(int a){
    int i=2;
    while(i<a){
    if(a%i==0){
        return false;
    }
    i++;
    }
    return true;
    }
int main(){
    int a;
    cin>>a;
    int ans =isPrime(a);
    cout<<"prime are not: "<<ans<<endl;
    cout<<"2 to a prime number: "<<endl;
    int k=2;
    while(k<=a){
        if(isPrime(k)){
            cout<<k<<endl;
        }
        k++;
    }

}
