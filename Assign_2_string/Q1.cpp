//Input a string and concatenate with its reverse string and print it.

#include <bits/stdc++.h>
using namespace std;
int main() {
    string str;
    cout << "Enter a string: ";
    getline(cin, str);
    string reversedStr = str;
    reverse(reversedStr.begin(), reversedStr.end());
    string result = str + reversedStr;
    cout << "Concatenated string: " << result << endl;

    return 0;
}

