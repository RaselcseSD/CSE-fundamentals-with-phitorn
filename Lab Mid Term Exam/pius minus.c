/*
Harry and Larry are now bored playing with numbers. Now they want to play with plus and minus signs. This time they don’t want to give signs one by one. Anyone can give any number of signs at a time but at most N signs. Can you tell the maximum of all signs that they gave sequentially?

For example:

If the input is 7 + + - + - - - , then the answer is 3 as 3 minus signs are given sequentially and it is the maximum.
If the input is 7 + + + + + - - , then the answer is 5.
Input Format

First line will contain a positive integer N
Second line will contain N signs (+ or -)
Constraints

0 < N <= 100
Output Format

Output a single integer, the maximum of all signs that came sequentially.
Sample Input 0

7
++++---
Sample Output 0

4
Submissions: 779
Max Score: 15
Difficulty: Easy
Rate This Challenge:


More



*/
#include <stdio.h>

int main() {
    int n, maxCount = 0, currentCount = 0;
    char currentSign = '+';
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        char sign;
        scanf(" %c", &sign);
        if (sign == currentSign) {
            currentCount++;
        } else {
            if (currentCount > maxCount) {
                maxCount = currentCount;
            }
            currentSign = sign;
            currentCount = 1;
        }
    }
    if (currentCount > maxCount) {
        maxCount = currentCount;
    }
    printf("%d\n", maxCount);
    return 0;
}

