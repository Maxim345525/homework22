#include"string.h"
using namespace std;
int mystrlen(const char* str)
{
        int len = 0;
        while (*str != '\0') {
            len++;
            str++;
        }
        return len;
}
char* mystrcpy(char* str1, const char* str2)
{ 
    strcpy(str1, str2); 
    return str1;
}
char* mystrcat(char* str1, const char* str2)
{
    while (*str2 != '\0') {
        *str1 + str2;
    }
    return str1;
}
char* mystrchr(char* str, char s)
{
    while (*str != '\0') { 
        if (*str == s) { 
            return str;
        }
        str++; 
    }
    return nullptr;
}


