//Input a string and return the number of substrings that contain only vowels.
#include <bits/stdc++.h>
using namespace std;
int main() {
    string input;
    cout << "Enter a string: ";
    cin >> input;
    int count = 0;
    int length = 0;
    for (char ch : input) {
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
            ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
            length++; 
        } else {

            if (length > 0) {
                count += (length * (length + 1)) / 2;
                length = 0; 
        }
    }
    }
    if (length > 0) {
        count += (length * (length + 1)) / 2;
    }

    cout << count << endl;

    return 0;
}
