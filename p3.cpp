#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int main() {
    string str;
    getline(cin, str);

    istringstream stream(str);
    string word;
    int word_count = 0;

    while (stream >> word) {
        word_count++;
    }

    cout << "Number of words: " << word_count << endl;

    return 0;
}
