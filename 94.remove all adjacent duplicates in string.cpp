#include<iostream>
#include<string>
using namespace std;
string removeadjacentduplicates(string s)
{
    if(s.size()<2)
        return s;
    for(int i=0;i<s.length();i++){
        if(s[i]==s[i+1]){
            s.erase(i,2);
          return removeadjacentduplicates(s);
        }
    }
    return s;
}
int main()
{
    string str="abbacaa";
    cout<<removeadjacentduplicates(str);
}
