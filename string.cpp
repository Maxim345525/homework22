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
        char* result = str1;
        while (*str2 != '\0') {
            *str1++ = *str2++;
        }
        *str1 = '\0';
        return result;
}
char* mystrcat(char* str1, const char* str2)
{
    while (*str2 != '\0') {
        *str1 + str2;
    }
    return 
}
p