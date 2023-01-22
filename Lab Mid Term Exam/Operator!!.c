/*You are given a string S consisting only +(Addition),*(Multiplication). The next line will contain two positive values.

Now, Calculate the sum of every operations. See the explanation for more clarification.

Input Format

First line contains a string S, consisting only +(Addition),*(Multiplication) operator.
The second line will contain two positive integers a and b
Constraints

1 <= |S| <= 20, where |S| means the length of S.
1<= a, b <= 50
Output Format

Print the summation which were perform based on String S.
Sample Input 0

+*
5 10
Sample Output

65
Explanation

when S[i] = '+',Then a+b = 5 + 10 = 15 and sum = 15
when S[i] = '*',Then a*b = 5 * 10 = 50 and sum = 15 + 50 = 65
Sample Input 1

+***+
2 1
Sample Output 1

12*/

#include <stdio.h>
#include <string.h>

int main() {
    char S[21];
    int a, b, sum = 0;
    scanf("%s", S);
    scanf("%d %d", &a, &b);

    for (int i = 0; i < strlen(S); i++) {
        if (S[i] == '+') {
            sum += a + b;
        } else if (S[i] == '*') {
            sum += a * b;
        }
    }
    printf("%d", sum);
    return 0;
}
