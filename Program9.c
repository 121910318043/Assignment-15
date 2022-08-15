#include<stdio.h>
void mergedecending(int a[],int b[],int n)
{
    int i=0,j=0,k,c[n*2];
    printf("Enter elements in 1st array: ");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    printf("Enter elements in 2nd array: ");
    for(i=0;i<n;i++)
        scanf("%d",&b[i]);
    for(i=0;i<n;i++)
    {
        c[i]=a[i];
        c[n+i]=b[i];
    }
    for(i=0;i<(n*2);i++)
        for(j=i;j<=(n*2);j++)
    {
        if(c[i]<c[j])
            {
                k=c[i];
                c[i]=c[j];
                c[j]=k;
            }
    }
    for(i=0;i<n*2;i++)
    printf("Merge in descending order = %d ",c[i]);
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
