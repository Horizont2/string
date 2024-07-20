#include <iostream>
#include <string>
#include <algorithm>
#include <cctype>

using namespace std;

int main() {
    string str;
    getline(cin, str);

    string filtered_str;
    for (char ch : str) {
        if (isalnum(ch)) {
            filtered_str += tolower(ch);
        }
    }
    string reversed_str = filtered_str;
    reverse(reversed_str.begin(), reversed_str.end());

    if (filtered_str == reversed_str) {
        cout << "The string is a palindrome." << endl;
    } else {
        cout << "The string is not a palindrome." << endl;
    }

    return 0;
}
