#include <iostream>
#include <cstring>
using namespace std;
//Answer 1:
void findSubstring(const char* str, const char* sub) {
    int strLength = strlen(str);
    int subLength = strlen(sub);
    if (subLength > strLength) {
        cout << "Substring not found in the given string." << std::endl;
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
            cout << "Substring found at position: " << (ptr - str) + 1 << std::endl;
        }
        ptr++;}
}
int main() {
    const char* mainString = "ababcababcabc";
    const char* substring = "abc";
    cout << "Finding substring '" << substring << "' in string '" << mainString << "':" << std::endl;
    findSubstring(mainString, substring);
    return 0;
}


#include <list>
//Answer 2:
void printList(const list<int>& linkedList) {
    for (const auto& element : linkedList) {
        cout << element << " ";
    }
    cout << endl;
}

int main() {
    list<int> linkedList;

    linkedList.push_back(10);
    linkedList.push_back(20);
    linkedList.push_back(30);
    linkedList.push_back(40);

    cout << "Initial Linked List: ";
    printList(linkedList);
    return 0;
}
