#include<stdio.h>
/*Write a function to sort an array of any size. (TSRS)*/
void sort(int b[],int n)
{
    int i,j,k;
    printf("Enter elements in the array: ");
    for(i=0;i<n;i++)
        scanf("%d",&b[i]);
    for(i=0;i<n;i++)
        for(j=0;j<=i;j++)
    {
       if(b[i]<b[j])
       {
            k=b[i];
            b[i]=b[j];
            b[j]=k;
       }
    }
    printf("sorted elements = [");
    for(i=0;i<n;i++)
    printf(" %d ",b[i]);
    printf("]");
}
int main()
{
    int n;
    printf("Enter size of the array: ");
    scanf("%d",&n);
    int a[n];
    sort(a,n);
    return 0;
}
