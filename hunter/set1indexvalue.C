#include <stdio.h>

int main()
{
int n,value,i;
int a[100];
scanf("%d",&n);
for(i=0;i<n;i++)
{
    scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
    if(i==a[i])
    {
        printf("\n%d",a[i]);
    }
}

    return 0;
}
