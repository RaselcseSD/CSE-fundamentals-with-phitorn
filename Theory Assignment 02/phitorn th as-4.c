/*You will be given two integers n and k. First you need to print all the even numbers from 1 to n serially and then followed by those even numbers print all the odd numbers in the same range. Finally, find the k-th number in the sequence that you just printed.

Sample Input:
13 9

Sample Output:
2 4 6 8 10 12 1 3 5 7 9 11 13
The 9th element in this sequence is 5.

Explanation:
After printing the even numbers and then all the odd numbers if we look at the sequence the 9th element in the sequence is 5.
The 1st one is 2, the 2nd one is 4 and so on.*/


#include <stdio.h>

int main() {
    int n, k, i, arr[100];

    printf("Enter the value of n: ");
    scanf("%d", &n);
    printf("Enter the value of k: ");
    scanf("%d", &k);

    int count = 0;
    for (i = 2; i <= n; i += 2) {
        arr[count++] = i;
    }
    for (i = 1; i <= n; i += 2) {
        arr[count++] = i;
    }

    printf("The sequence is: ");
    for (i = 0; i < count; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    printf("The %dth element in this sequence is %d\n", k, arr[k-1]);

    return 0;
}

