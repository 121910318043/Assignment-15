#include<stdio.h>
void mergedecending(int a[],int b[],int n)
{
    int i,j,t;
    printf("Enter elements in 1st array: ");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    printf("Enter elements in 2nd array: ");
    for(i=0;i<n;i++)
        scanf("%d",&b[i]);
    for(i=0;i<n-1;i++)
    {
        for(j=i;j<n;j++)
    {
        if(a[i]<a[j])
            {
                t=a[i];
                a[i]=a[j];
                a[j]=t;
            }
        if(b[i]<b[j])
            {
                t=b[i];
                b[i]=b[j];
                b[j]=t;
            }
    }
}
printf("\"merge of 1st + 2nd array in descending order = ");
for(i=0;i<n;i++)
    printf("%d + %d   ",a[i],b[i]);
    printf(" = ");
for(i=0;i<n;i++)
    printf("%d  ",a[i]+b[i]);
printf("\"");
}
int main()
{
    int n;
    printf("Enter size of both the arrays: ");
    scanf("%d",&n);
    int a[n],b[n];
    mergedecending(a,b,n);
    return 0;
}
