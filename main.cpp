#include <iostream>
#include"string.h"
using namespace std;
int main()
{
    cout << mystrlen("My name Maximm.");
    return 0;
    char str1[100] = "Hello";
    char str2[100] = "Maxim";
    cout << "Before copying->str1 = " << str1 << ", str2 = " << str2 << endl;
    char* result = copy_string(str1, str2);
    cout << "After copying->str1 = " << str1 << ", str2 = " << str2 << endl;
    cout << "Result: " << result << endl;
    char str[100] = "Hello worlds!";
    char* result = mystrchr(str, s);
    if (result != nullptr) {
        cout << "S found: " << *result << endl;
    }
    else {
        cout << "Character not found" << endl;
    }
    return 0;
}
