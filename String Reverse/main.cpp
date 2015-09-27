#include <iostream>
#include <string.h>
using namespace std;

char* reverseString(char* s){
    for (int i = 0, j = strlen(s)-1; i < strlen(s)/2 ; ++i,--j) {
        char c = s[i];
        s[i] = s[j];
        s[j] = c;
    }
    return s;
}

int main() {
    char st[] = "Hello There!";
    char* s = &st[0];
    s = reverseString(s);
    cout<<s;
    return 0;
}