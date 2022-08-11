
#include<iostream>
using namespace std;
int main()
{
    int i,n,evensum=0,oddsum=0;
    cout<<"enter n: ";
    cin>>n;
    while(n>0){
            i=n%10;
        if(i%2==0){
            evensum=evensum + i;
        }
        else{
            oddsum=oddsum +i;
        }
        n=n/10;
    }
    cout<<"even sum: "<<evensum<<endl;
    cout<<"odd sum: "<<oddsum;
}
