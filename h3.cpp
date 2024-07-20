#include <iostream>
#include <string>

using namespace std;

void insertCharAt(string &str, char ch, int index) {
    if (index >= 0 && index <= str.length()) {
        str.insert(index, 1, ch);
    }
}

int main() {
    string str;
    char ch;
    int index;
    cout << "Enter a string: ";
    getline(cin, str);
    cout << "Enter the character to insert: ";
    cin >> ch;
    cout << "Enter the index to insert at: ";
    cin >> index;

    insertCharAt(str, ch, index);
    cout << "Modified string: " << str << endl;

    return 0;
}
