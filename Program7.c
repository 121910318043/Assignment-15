#include<stdio.h>
/*Write a function in C to count a total number of duplicate elements in an array.*/
int duplicate(int a[],int n)
{
    int i,j,count=0;
    printf("enter elements in the array: ");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    for(i=0;i<n;i++)
    {
        for(j=i;j<n-1;j++)
    {
        if(a[i]==a[j+1])
        {
            count++;
            i++;
        }

    }
    }
    return count;
}
int main()
{
    int n;
    printf("Enter size of the array: ");
    scanf("%d",&n);
    int a[n];
    printf("number of duplicate elements = %d",duplicate(a,n));
    return 0;
}
