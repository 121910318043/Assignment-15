#include<stdio.h>
/*Write a function to find the first occurrence of adjacent duplicate values in the array.
Function has to return the value of the element.*/
int greatest(int b[],int n)
{
    int i;
    printf("Enter elements in array: ");
    for(i=0;i<n;i++)
        scanf("%d",&b[i]);
    for(i=0;i<n-1;i++)
    {
        if(b[i]==b[i+1])
            break;
    }
            return b[i];
}
int main()
{
    int n;
    printf("Enter size of the array: ");
    scanf("%d",&n);
    int a[n];
    printf("First occurrence of adjacent duplicate value = %d",greatest(a,n));
    return 0;
}

