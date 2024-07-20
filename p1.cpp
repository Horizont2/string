#include <iostream>
#include <string>

using namespace std;

int main() {
    string str;
    getline(cin, str);

    for (char& ch : str) {
        if (ch == ' ') {
            ch = '\t';
        }
    }

    cout << "Modified string: " << str << endl;
    return 0;
}
