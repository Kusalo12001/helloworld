#include<iostream>

using namespace std;
int main()
{
    int N;
    cin>>N;
    int n=1;
    int count=1;
    while(n<=N||count<=N){
        int AP;
        AP=3*n+2;
        if(AP%4!=0){
            cout<<AP<<endl;
            count++;
        }
    n++;
    }
}
