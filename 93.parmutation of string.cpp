#include<iostream>
#include<string>
using namespace std;
bool chackequal(int a[26],int b[26])
{
    for(int i=0;i<26;i++){
        if(a[i]!=b[i])
            return 0;
    }
    return 1;
}
bool parmutationofstring(string s1,string s2)
{
    //character array count
    int count1[26]={0};
    for(int i=0;i<s1.length();i++){
        int index=s1[i]-'a';
        count1[index]++;
    }
    //traverse s2 string in window of size s1 length and compare
    int i=0;
    int windowsize=s1.length();
    int count2[26]={0};
      while(i<windowsize && i<s2.length()){
        int index=s2[i]-'a';
        count2[index]++;
        i++;
      }
      if(chackequal(count1,count2)){
        return 1;
      }
      while(i<s2.length()){
       char newchar=s2[i];
       int index =newchar-'a';
       count2[index]++;

       char oldchar = s2[i-windowsize];
       index=oldchar-'a';
       count2[index]--;
      i++;
      if(chackequal(count1,count2))
        return 1;
      }

}
int main()
{
    string s1="ab";
    string s2="eidbaooo";
    cout<<parmutationofstring(s1,s2);
}
