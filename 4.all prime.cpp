#include<iostream>
using namespace std;
int main()
{
    int i, chk=0, j,n;
    cout<<"Prime Numbers Between 1 to n are:";
    cin>>n;
    i=1;
    while(i<=n)
    {
        j=2;
        while(j<i)
        {
           if(i%j==0)
           {
               chk++;
               break;
           }
           j++;
        }

        if(chk==0 && i!=1)
            cout<<i<<endl;
        chk = 0;
        i++;
    }

    cout<<endl;
}


