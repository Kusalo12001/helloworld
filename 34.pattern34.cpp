#include<iostream>
using namespace std;
int main()
{
    int  n,n1,n2;
    cin>>n;
    int i=1;
    n1=(n+1)/2;
    n2=n/2;
    while(i<=n1){
            //1st space print
        int space1=1;
        while(space1<=n-i){
            cout<<" ";
            space1++;
        }
        //1st triangle print
        int j=1;
        while(j<=i){
            cout<<"*";
            j++;
        }
        //2nd triangle print
        int k=1;
        while(k<=i-1){
            cout<<"*";
            k++;
        }
        //2nd space print
        int l=1;
        while(l<=j){
            cout<<"*";
            l++;
        }

        cout<<endl;
        i++;
    }
    cout<<endl;
    while(i<=n2){
        int m=1;
        while(m<=i){
            cout<<" ";
            m++;
        }
        int p=1;
        while(p<=n2-1){
            cout<<"*";
            p++;
        }
    }
}
