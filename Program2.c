#include<stdio.h>
/*Write a function to find the smallest number from the given array of any size. (TSRS)*/
int smallest(int b[],int n)
{
    int i,j,k;
    printf("Enter elements in the array: ");
    for(i=0;i<n;i++)
        scanf("%d",&b[i]);
    for(i=0;i<n;i++)
        for(j=0;j<=i;j++)
    {
        if(b[i]>b[j])
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
    printf("smallest number = %d",smallest(a,n));
    return 0;
}
