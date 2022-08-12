#include<iostream>
using namespace std;
int main()
{
    int basic,allow;
    double hra,pf,da,totalsalary;
    char gread='b';
    cout<<"gread: ";
    cin>>gread;
    cout<<"basic: ";
    cin>>basic;
    if(gread=='A'){
        allow=1700;
    }
    else if(gread=='B'){
        allow=1500;
    }
    else{
        allow=1300;
    }
    cout<<"allow: "<<allow<<endl;
    hra   = (basic*0.2);
    da    = (basic*0.5);
    pf    = (basic*0.11);
    totalsalary=basic+hra+da+allow-pf;
    cout<<"hra: "<<hra<<endl;
    cout<<"da: "<<da<<endl;
    cout<<"pf: "<<pf<<endl;
    cout<<"total salary: "<<totalsalary;
}

