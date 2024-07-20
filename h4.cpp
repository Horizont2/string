#include <iostream>
#include <string>

using namespace std;

int main() {
    string str;
    cout << "Enter a string: ";
    getline(cin, str);

    for (char &ch : str) {
        if (ch == '.') {
            ch = '!';
        }
    }

    cout << "Modified string: " << str << endl;

    return 0;
}
