#include<iostream>
using namespace std;
int main()
{
int n;
cout<<"enter n: ";
cin>>n;
int i=1;

while(i<=n){
    int j=1;

    while(j<=n){
    char x='a'+j-1;
        cout<<x;
       j++;
    }
    cout<<endl;
    i++;
    }
}
