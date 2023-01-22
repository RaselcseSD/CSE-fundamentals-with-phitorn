/*
Problem Statement

You love binary numbers 0 and 1. Now,You are given a binary string S of size N. Now you need to tell total how many 01 and 10 pair exist in the given string.

Note - A binary string is a string which contains only 0 and 1. And you have to consider 01 or 10 as consecutive.

Input Format

The first line will contain T, the number of test cases.
The first line of each test case contains a positive integer N.
The second line of each test case contains a string S, consisting only 0 and 1.
Constraints

1 <= T <= 100
1 <= N <= 1000
Output Format

Print the count of pairs.
Sample Input 0

4
12
101011111010
6
101011
3
100
2
10
Sample Output 0

7
4
1
1
Explanation 0

In the first case 101011111010, there are 7 pairs. These are - 10 1011111010, 1 01 011111010, 10 10 11111010, 101 01 1111010, 10101111 10 10, 101011111 01 0, 1010111110 10
*/
#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);

    while (T--) {
        int N;
        scanf("%d", &N);

        char S[N + 1];
        scanf("%s", S);

        int count = 0;
        for (int i = 0; i < N - 1; i++) {
            if (S[i] == '0' && S[i + 1] == '1') {
                count++;
            } else if (S[i] == '1' && S[i + 1] == '0') {
                count++;
            }
        }
        printf("%d\n", count);
    }

    return 0;
}

