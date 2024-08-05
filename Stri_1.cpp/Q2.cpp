//Input a string of length n and count all the consonants in the given string.

#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    getline(cin,s);
    int n=s.length();
    int c=0;
    for(int i=0;i<n;i++){
        if(s[i]=='a'|| s[i]=='e'|| s[i]=='i'|| s[i]=='o'|| s[i]=='u') c++;
    }
    cout<<n-c;

}