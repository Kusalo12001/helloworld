#include<iostream>
#include<string>
using namespace std;
/*string  ptintstring(string temp)
{
    for(int i=0;i<temp.length();i++){
        cout<<temp[i];
    }
}*/
string replacespaces(string str)
{
    string temp=" ";
    for(int i=0;i<str.length();i++){
        if(str[i]==' '){
            temp.push_back('@');
            temp.push_back('4');
            temp.push_back('0');
        }
        else{
            temp.push_back(str[i]);
        }
    }
    cout<<temp;
    //ptintstring(temp);
}


 int main()
 {
     string str="i play cricket";
     replacespaces(str);
    // string temp=" ";
    /*for(int i=0;i<str.length();i++){
        if(str[i]==' '){
            temp.push_back('@');
            temp.push_back('4');
            temp.push_back('0');
        }
        else{
            temp.push_back(str[i]);
        }
    }
    cout<<temp;*/
 }
