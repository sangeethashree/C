#include <stdio.h>

int main()
{
    int n,n1;
    printf("enter the n value");
    scanf("%d",&n);
    n1=n-1;
    if(n%2==0)
    {
    printf("%d",n);
    }
    else if(n1%2==0)
    {
    printf("%d",n1);
    }
    else
    {
    printf("");
    }
return 0;
}
