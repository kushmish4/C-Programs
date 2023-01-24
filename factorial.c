#include<stdio.h>
int main()
{
    int i,n,f;
    f=i=1;
    printf("enter a number");
    scanf("%d",&n);
    while(i<=n)
    {
        f=f*n;
        n++;
    }
    printf("%d",f);
    return 0;
    
}