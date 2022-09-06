#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int i=1;
    while(i<=n){
        //space print
        int space=1;
        while(space<=n-i){
            cout<<" ";
            space++;
        }
        //first * triangle print
        int j=1;
        while(j<=i){
            cout<<"*";
            j++;
        }
        //2nd * triangle print
        j=i-1;
        while(j>=1){
            cout<<"*";
            j--;
        }
        cout<<endl;
        i++;
    }
}
