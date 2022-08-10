#include<stdio.h>
void unique(int a[],int n)
{
    int i,j,count;
    printf("Enter %d elements in the array: ",n);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    printf("unique elements = ");
    for(i=0;i<n;i++)
    {
        count=0;
        for(j=0;j<n;j++)
        {
            if(a[i]==a[j])
                count++;
        }
        if(count==1)
            printf("%d ",a[i]);
    }
}
int main()
{
    int n;
    printf("Enter the size of the array: ");
    scanf("%d",&n);
    int a[n];
    unique(a,n);
    return 0;
}
