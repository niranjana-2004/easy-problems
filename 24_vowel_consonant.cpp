#include <iostream>
using namespace std;

int main() {
    char ch;

    cout << "Enter an alphabet: ";
    cin >> ch;

    ch = tolower(ch);

    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
        cout << ch << " is a Vowel." << endl;
    }
    else if (ch >= 'a' && ch <= 'z') {
        cout << ch << " is a Consonant." << endl;
    }
    else {
        cout << "Invalid input" << endl;
    }

    return 0;
}
