#include <iostream>
#include <string>

using std::cout; using std::cin; using std::endl;

bool is_palindrome(const std::string& str) {
    size_t start{ 0 }, last{ str.size() - 1 };

    while (start++ <= last--) {
        if (str[start] != str[last])
            return false;
    }

    return true;
}

int main() {
    std::string word;
    cout << "Enter a single word: ";
    cin >> word;
    
    if (is_palindrome(word)) {
        cout << word << " is a palindrome!" << endl;
    } else {
        cout << word << " is not a palindrome(((" << endl;
    }
}