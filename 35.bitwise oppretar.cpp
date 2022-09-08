#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cin>>a>>b;
      int ror=a|b;
      int rand=a&b;
      int rnot=~a;
      int rxor=a^b;
      int rls=a<<2;
      int rrs=b>>1;
      cout<<"ror: "<<ror<<endl;
      cout<<"rand: "<<rand<<endl;
      cout<<"rnot: "<<rnot<<endl;
      cout<<"rxor: "<<rxor<<endl;
      cout<<"rls: "<<rls<<endl;
      cout<<"rrs: "<<rrs<<endl;
}
