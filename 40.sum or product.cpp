#include<iostream>
using namespace std;
int main()
{
    int n,choice;
    cin>>n;
    cin>>choice;
    int i=1;
    if(choice==1){
            int sum=0;
        while(i<=n){

            sum=sum+i;
            i++;
        }
        cout<<sum;
    }
    else if(choice==2){
            int product=1;
        while(i<=n){
            product=product*i;
            i++;
        }
        cout<<product;
    }
    else{
        cout<<"-1";
    }
}
