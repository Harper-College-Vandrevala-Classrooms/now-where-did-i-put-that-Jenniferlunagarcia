#include <iostream>
#include <string>

// Function to find a character in a string
int find(const std::string &str, char ch) {
    for (int i = 0; i < str.length(); i++) {
        if (str[i] == ch) {
            return i;  // Return the index of the first occurrence
        }
    }
    return -1;  // Return -1 if the character is not found
}

// Function to find a substring in a string
int find(const std::string &str, const std::string &substr) {
    int strLen = str.length();
    int subLen = substr.length();

    // Loop through the main string
    for (int i = 0; i <= strLen - subLen; i++) {
        int j;
        // Check if the substring matches the part of the main string
        for (j = 0; j < subLen; j++) {
            if (str[i + j] != substr[j]) {
                break;
            }
        }
        if (j == subLen) {
            return i;  // Return the index where the substring starts
        }
    }
    return -1;  // Return -1 if the substring is not found
}

// Driver program to test the overloaded functions
int main() {
    std::string mainString = "Hello, this is a simple string.";
    char targetChar = 's';
    std::string targetSubstring = "simple";

    // Test the find function for a character
    int charPos = find(mainString, targetChar);
    if (charPos != -1) {
        std::cout << "Character '" << targetChar << "' found at index: " << charPos << std::endl;
    } else {
        std::cout << "Character '" << targetChar << "' not found." << std::endl;
    }

    // Test the find function for a substring
    int substrPos = find(mainString, targetSubstring);
    if (substrPos != -1) {
        std::cout << "Substring \"" << targetSubstring << "\" found at index: " << substrPos << std::endl;
    } else {
        std::cout << "Substring \"" << targetSubstring << "\" not found." << std::endl;
    }

    // Additional test cases
    std::cout << "\nAdditional Test Cases:" << std::endl;

    // Test for a character not in the string
    char targetChar2 = 'z';
    int charPos2 = find(mainString, targetChar2);
    if (charPos2 != -1) {
        std::cout << "Character '" << targetChar2 << "' found at index: " << charPos2 << std::endl;
    } else {
        std::cout << "Character '" << targetChar2 << "' not found." << std::endl;
    }

    // Test for a substring not in the string
    std::string targetSubstring2 = "complex";
    int substrPos2 = find(mainString, targetSubstring2);
    if (substrPos2 != -1) {
        std::cout << "Substring \"" << targetSubstring2 << "\" found at index: " << substrPos2 << std::endl;
    } else {
        std::cout << "Substring \"" << targetSubstring2 << "\" not found." << std::endl;
    }

    return 0;
}


