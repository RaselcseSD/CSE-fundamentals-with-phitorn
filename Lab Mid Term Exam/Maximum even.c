#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int max_even = -1;
    for (int i = 0; i < n; i++)
    {
        int num;
        scanf("%d", &num);

        if (num % 2 == 0)
        {
            if (num > max_even)
                max_even = num;
        }
        else
        {
            for (int j = 0; j < i; j++)
            {
                int prev_even = 0;
                scanf("%d", &prev_even);
                if(prev_even % 2 == 0)
                {
                    int sum = num + prev_even;
                    if (sum % 2 == 0 && sum > max_even)
                        max_even = sum;
                }
            }
        }
    }

    printf("%d\n", max_even);
    return 0;
}
