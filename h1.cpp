#include <iostream>
#include <string>

using namespace std;

void removeCharAt(string &str, int index) {
    if (index >= 0 && index < str.length()) {
        str.erase(index, 1);
    }
}

int main() {
    string str;
    int index;
    cout << "Enter a string: ";
    getline(cin, str);
    cout << "Enter the index to remove: ";
    cin >> index;

    removeCharAt(str, index);
    cout << "Modified string: " << str << endl;

    return 0;
}
