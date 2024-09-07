//Find the second largest digit in the string consisting of digits from ‘0’ to ‘9’. 

#include <bits/stdc++.h>
using namespace std;
int main() {
    string digits;
    char largest = '0';
    char seclargest = '0';
    cout << "Enter a string of digits: ";
    cin >> digits;
    for (char ch : digits) {
        if (ch >= '0' && ch <= '9') {
            if (ch > largest) {
                seclargest = largest;
                largest = ch;
            } else if (ch > seclargest && ch != largest) {
                seclargest = ch;
            }
        }
    }
    if (seclargest != '0') {
        cout << "second largest digit is: " << seclargest << endl;
    } else {
        cout << "no second largest digit." << endl;
    }

    return 0;
}
