/*int i=0;
while(i<10)
{
	printf(“I am inside the loop”);
}
What is wrong with this block of C code? Mark the errors and fix them.  */

#include<stdio.h>
int main()
{
    int i = 0;
    while (i < 10) {
    printf("I am inside the loop\n");
    i++;
}


    return 0;
}
