
//Input a string of length less than 10 and convert it into integer without using builtin function.
#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    getline(cin,s);
    int n=s.length();
    int x=0;
    for(int i=0;i<n;i++){
        x*=10;
        x+=(s[i]-48);

    }
    cout<<x;
    

}