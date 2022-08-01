#include<iostream>
using namespace std;
int main()
{
    int a,b,smaller;
    cout<<"enter the 1 number: ";
    cin>>a;
    cout<<"enter the 2 number: ";
    cin>>b;
    smaller=a;
    if(a<b){
        if(b%a==0){
            cout<<"gcd"<<a;
        }
    }
    else if(a%b==0){
            cout<<"gcd:"<<b;
        }
    else{
        int i=2,gcd=1;
        while(i<=smaller){
            if(a%i==0 && b%i==0){
                gcd=i;
            }
            i++;
        }
        cout<<"gcd: "<<gcd;
    }
}
