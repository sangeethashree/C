#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
int n,i,sum=0,sum1=0;
int avg,avg1,len;
int a[i];
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
len=round(n/2);
if(n%2!=0)
{
for(i=0;i<len;i++)
{
sum=sum+a[i];
}avg=sum/len;
}
else
{
for(i=0;i<len;i++)
{
sum=sum+a[i];
}avg=sum/len;
}
for(i=len;i<n;i++)
{
sum1=sum1+a[i];
}avg1=sum1/(len+1);
if(avg==avg1)
printf("the avg is equal");
else
printf("not equal");
getch();
}
