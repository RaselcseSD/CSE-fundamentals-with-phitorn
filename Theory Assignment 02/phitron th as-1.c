/*Write a C program that will take a string
 as input from you and change the cases
 of the characters.If the letter is capital,
 change it into small and if the letter is
 small change it into capital letter.
 Look at the test case and explanation
 for more clarification.

Sample Input:
hElLoWorld

Sample Output:
HeLlOwORLD*/

#include <stdio.h>
#include <ctype.h>

int main() {
    char str[100];
    int i;

    printf("Enter a string: ");
    scanf("%s", str);

    for (i = 0; str[i]; i++) {
        if (isupper(str[i]))
            str[i] = tolower(str[i]);
        else if (islower(str[i]))
            str[i] = toupper(str[i]);
    }

    printf("Changed string: %s\n", str);

    return 0;
}

