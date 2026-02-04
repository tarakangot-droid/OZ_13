#include <iostream>
#include <string>

using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");

    string s;
    cout << "Строка: ";
    getline(cin, s);

    string result = "";
    int depth = 0;

    for (int i = 0; i < s.length(); i++) {
        if (s[i] == '(') {
            depth++;
            if (depth == 1) {
                result += ' ';
            }
        }
        else if (s[i] == ')') {
            if (depth > 0) depth--;
        }
        else {
            if (depth == 0) {
                result += s[i];
            }
        }
    }

    cout << result << "\n";
    return 0;
}