#include<stdio.h>
/*Write a function in C to read n number of values in an array and display it in reverse
order.*/
void displayreverseorder(int b[],int n)
{
    int i,t;
    printf("Enter elements in the array: ");
    for(i=0;i<n;i++)
        scanf("%d",&b[i]);
    for(i=0;i<n/2;i++)
    {
        t = b[i];
        b[i] = b[n-1-i];
        b[n-1-i] = t;
    }
    printf("reverse order = ");
    for(i=0;i<n;i++)
        printf("%d ",b[i]);
}
int main()
{
    int n;
    printf("Enter size of the array: ");
    scanf("%d",&n);
    int a[n];
    displayreverseorder(a,n);
    return 0;
}
