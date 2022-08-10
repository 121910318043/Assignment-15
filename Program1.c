#include<stdio.h>
/*Write a function to find the greatest number from the given array of any size. (TSRS)*/
int greatest(int b[],int n)
{
    int i,j,k;
    printf("Enter elements in array: ");
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
    return b[n-1];
}
int main()
{
    int n;
    printf("Enter size of the array: ");
    scanf("%d",&n);
    int a[n];
    printf("greatest number = %d",greatest(a,n));
    return 0;
}
