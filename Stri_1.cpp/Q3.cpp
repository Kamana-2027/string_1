//Check whether the given string is palindrome or not.

#include<bits/stdc++.h>
using namespace std;
bool ispalindrome(string s){
    int n=s.length();
    int i=0;
    int j=n-1;
    while(i<j){
        if(s[i]!=s[j]) return false;
        i++;
        j--;
    }
    return true;
}
int main(){
    string s;
    getline(cin,s);
    int n=s.length();
    if(ispalindrome(s)==true) 
    cout<<"string is palindrome";
    else 
    cout<<"not a palrindrome";


}