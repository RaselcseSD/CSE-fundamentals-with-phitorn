#include <stdio.h>
#include <string.h>

int find_char(char str[], char c) {
    int i;
    for (i = 0; i < strlen(str); i++) {
        if (str[i] == c)
            return 1;
    }
    return 0;
}

int main() {
    char str[100];
    int flag = 0;

    printf("Enter a string of digits: ");
    scanf("%s", str);

    if (find_char(str, '1') && find_char(str, '9') && find_char(str, '7'))
        flag = 1;

    if (flag)
        printf("Yes\n");
    else
        printf("No\n");

    return 0;
}

