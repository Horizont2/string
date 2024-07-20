#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main() {
    string str;
    getline(cin, str);

    int letters = 0, digits = 0, others = 0;

    for (char ch : str) {
        if (isalpha(ch)) {
            letters++;
        } else if (isdigit(ch)) {
            digits++;
        } else {
            others++;
        }
    }

    cout << "Letters: " << letters << endl;
    cout << "Digits: " << digits << endl;
    cout << "Other characters: " << others << endl;

    return 0;
}
