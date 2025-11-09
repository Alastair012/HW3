#include <stdio.h>
#include <ctype.h>

char changeCase(char c) {
    if (isupper(c))
        return tolower(c);
    else if (islower(c))
        return toupper(c);
    else
        return c;
}

int main() {
    char ch;
    scanf("%c", &ch);
    printf("%c\n", changeCase(ch));
    return 0;
}

