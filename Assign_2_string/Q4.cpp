//anagram
#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cout<<"enter s string:";
    getline(cin,s);
    string t;
    cout<<"enter t string";
    getline(cin,t);
    int n=s.size();
    int m=t.size();
    sort(s.begin(),s.end());
    sort(t.begin(),t.end());
    if(s==t) cout<<true;
    else cout<<false;
}