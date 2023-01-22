#include<stdio.h>
int main()
{
    int a,b,ans;
    scanf("%d %d",&a,&b);
    char c;
    getchar();
    c = getchar();
    if(c=='+')
    {
        ans=a+b;
        printf("Ans =%d",ans);
    }
    else if(c=='-')
    {
        ans=a-b;
        printf("Ans =%d",ans);
    }
    else{
        printf("Invalit input");
    }

    return 0;
}
