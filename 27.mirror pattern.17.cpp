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
        int j=1;
        int val=1;
        while(j<=i){
        cout<<val;
        val++;
        j++;
        }
        cout<<endl;
        i++;
    }
}
