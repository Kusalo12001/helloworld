#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int i = 1;
    while(i<=n){
            //space ptint
        int k =1;
        while(k<=n-i){
            cout<<" ";
        k++;
        }
        // 1st triangle print
        int j=1;
        //int val=1;
        while(j<=i){
            cout<<j;
            //val++;
            j++;
        }
        //2nd tiiangle print

            j=i-1;
            while(j>=1){
                cout<<j;
                j--;
            }
            /* another method
            int l=1;
        int num =i-1;
        while(l<=i-1){
            cout<<num;
            num--;
            l++;
            }*/
        cout<<endl;
        i++;
    }
}
