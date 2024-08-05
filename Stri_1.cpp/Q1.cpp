//Input a string of size n and update all the odd positions in the string to character ‘#’.
#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    getline(cin,s);
    int n=s.length();
    for(int i=0;i<n;i++){
        if(i%2!=0) s[i]='#';
    }
    cout<<s;
}