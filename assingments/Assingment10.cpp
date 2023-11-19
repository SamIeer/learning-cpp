#include <iostream>
#include <cstring>

// Function to find starting locations of a substring in a string
void findSubstring(const char* str, const char* sub) {
    int strLength = strlen(str);
    int subLength = strlen(sub);

    if (subLength > strLength) {
        std::cout << "Substring not found in the given string." << std::endl;
        return;
    }

    const char* ptr = str;
    const char* subPtr;

    while (*ptr) {
        subPtr = sub;
        const char* tempPtr = ptr;

        while (*tempPtr == *subPtr && *tempPtr && *subPtr) {
            tempPtr++;
            subPtr++;
        }

        if (*subPtr == '\0') {
            // Substring found, print the starting location
            std::cout << "Substring found at position: " << (ptr - str) + 1 << std::endl;
        }

        ptr++;
    }
}

int main() {
    const char* mainString = "ababcababcabc";
    const char* substring = "abc";

    std::cout << "Finding substring '" << substring << "' in string '" << mainString << "':" << std::endl;
    findSubstring(mainString, substring);

    return 0;
}
